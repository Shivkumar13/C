#define _CRT_RAND_S

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* In stdlib.h -->
#ifdef _CRT_RAND_S
errno_t rand_s(unsigned int* p_num)
#endif
*/

#define SUCCESS              1
#define TRUE                 1
#define FALSE                0
#define LIST_DATA_NOT_FOUND  2
#define LIST_EMPTY           3


struct node
{
    int data;
    struct node* next;
};

/* 
    Routines that are called by client
    to make use of the list
*/
struct node* create_list(void);

int insert_at_start(struct node* p_list, int new_data);
int insert_at_end(struct node* p_list, int new_data);
int insert_after_data(struct node* p_list, int ext_data, int new_data);
int insert_before_data(struct node* p_list, int ext_data, int new_data);

int get_start(struct node* p_list, int* p_start_data);
int get_end(struct node* p_list, int* p_end_data);

int pop_start(struct node* p_list, int* p_start_data);
int pop_end(struct node* p_list, int* p_end_data);

int remove_start(struct node* p_list);
int remove_end(struct node* p_list);
int remove_data(struct node* p_list, int r_data);

int is_list_empty(struct node* p_list);
int find_data(struct node* p_list, int f_data);

void show_list(struct node* p_list, const char* msg);
int destroy_list(struct node* p_list);

void extreme_testing(void);

/* helper function */
struct node* get_new_node(int new_data);
struct node* search_node(struct node* p_list, int search_data);
/* Client code */

int main(void)
{
    struct node* p_list = NULL;
    int status;
    int data;

    p_list = create_list();
    show_list(p_list, "showing the list just after creation:");

    for(data = 10; data <= 60; data = data + 10)
    {
        status = insert_at_end(p_list, data);
        assert(status == SUCCESS);
    }
    show_list(p_list, "Showing after insert_at_end():");

    for(data = 100; data <= 600; data = data + 100)
    {
        status = insert_at_start(p_list, data);
        assert(status == SUCCESS);
    }
    show_list(p_list, "Showing after insert_at_start():");

    status = insert_after_data(p_list, 10, 0);
    assert(status == SUCCESS);
    show_list(p_list, "After inserting 0 after 10");

    status = insert_before_data(p_list, 10, -1);
    assert(status == SUCCESS);
    show_list(p_list, "After inserting -1 before 10");

    status = insert_before_data(p_list, 600, -600);
    assert(status == SUCCESS);
    show_list(p_list, "After inserting -600 before 600");

    status = insert_after_data(p_list, 60, -60);
    assert(status == SUCCESS);
    show_list(p_list, "After inserting-60 after 60");

    status = insert_after_data(p_list, -500, 10);
    assert(status == LIST_DATA_NOT_FOUND);
    puts("-500 is not present in the list");

    status = insert_before_data(p_list, -500, 10);
    assert(status == LIST_DATA_NOT_FOUND);
    puts("-500 is not present in the list");

    status = get_start(p_list, &data);
    assert(status == SUCCESS);
    printf("Start data = %d\n", data);
    show_list(p_list, "After get_start():");

    status = get_end(p_list, &data);
    assert(status == SUCCESS);
    printf("end data = %d\n", data);
    show_list(p_list, "After get_end():");

    status = pop_start(p_list, &data);
    assert(status == SUCCESS);
    printf("start data = %d\n", data);
    show_list(p_list, "After pop_start():");

    status = pop_end(p_list, &data);
    assert(status == SUCCESS);
    printf("end data = %d\n", data);
    show_list(p_list, "After pop_end():");

    status = remove_start(p_list);
    assert(status == SUCCESS);
    show_list(p_list, "After remove_start():");

    status = remove_end(p_list);
    assert(status == SUCCESS);
    show_list(p_list, "After remove_end():");

    status = remove_data(p_list, 0);
    assert(status == SUCCESS);
    show_list(p_list, "After remove_data():");

    if(is_list_empty(p_list) == FALSE)
        puts("List is not empty at the moment");
    
    if(find_data(p_list, 200) == TRUE)
        puts("200 is present in list at the moment");
    
    if(find_data(p_list, -5214) == FALSE)
        puts("-5214 is not present in the list at the moment");

    status = destroy_list(p_list);
    p_list = NULL;
    assert(status == SUCCESS);

    // extreme_testing();
    puts("SUCCESS");
    return (EXIT_SUCCESS);
}

/* End of Client Code */

/* Server Code */

struct node* create_list(void)
{
    struct node* p_list = NULL;

    p_list = get_new_node(-1);
    return(p_list);
    // return get_new_node(-1);
    
}

int insert_at_start(struct node* p_list, int new_data)
{
    struct node* p_new_node = NULL;
    p_new_node = get_new_node(new_data);
    p_new_node->next = p_list->next;
    p_list->next = p_new_node;

    return (EXIT_SUCCESS);
}


int insert_at_end(struct node* p_list, int new_data)
{
    struct node* p_last_node = NULL;
    struct node* p_new_node = NULL;

    p_last_node = p_list;
    while(p_last_node->next != NULL)
        p_last_node = p_last_node->next;
    p_new_node = get_new_node(new_data);
    p_last_node->next = p_new_node;
    p_new_node->next = NULL;

    return (SUCCESS);
}

int insert_after_data(struct node* p_list, int ext_data, int new_data)
{
    struct node* p_ext_node = NULL;
    struct node* p_new_node = NULL;

    p_ext_node = search_node(p_list, ext_data);
    if(p_ext_node == NULL)
        return(LIST_DATA_NOT_FOUND);
        
    p_new_node = get_new_node(new_data);
    p_new_node->next = p_ext_node->next;
    p_ext_node->next = p_new_node;

    return(SUCCESS);

}

int insert_before_data(struct node* p_list, int ext_data, int new_data)
{
    struct node* p_ext_node_prev = NULL;
    struct node* p_run = NULL;
    struct node* p_new_node = NULL;

    p_ext_node_prev = p_list;
    p_run = p_list->next;
    while(p_run != NULL)
    {
        if(p_run->data == ext_data)
            break;
        p_ext_node_prev = p_run;
        p_run = p_run->next;
    }

    if(p_run == NULL)
        return (LIST_DATA_NOT_FOUND);
    
    p_new_node = get_new_node(new_data);
    p_new_node->next = p_ext_node_prev->next;
    p_ext_node_prev->next = p_new_node;


    return (SUCCESS);
}

int get_start(struct node* p_list, int* p_start_data)
{
    if(p_list->next == NULL)
        return (LIST_EMPTY);
    
    *p_start_data = p_list->next->data;
    return (SUCCESS);
}

int get_end(struct node* p_list, int* p_end_data)
{
    struct node* p_run = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);
    
    p_run = p_list;
    while(p_run->next != NULL)
        p_run = p_run->next;

    *p_end_data = p_run->data;
    return (SUCCESS);
}

int pop_start(struct node* p_list, int* p_start_data)
{
    struct node* first_node = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);

    first_node = p_list->next;
    *p_start_data = first_node->data;

    p_list->next = first_node->next;
    free(first_node);
    first_node = NULL;

    return (SUCCESS);
}

int pop_end(struct node* p_list, int* p_end_data)
{
    struct node* p_last_node = NULL;
    struct node* p_last_node_prev = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);
    
    p_last_node = p_list->next;
    p_last_node_prev = p_list;
    while(p_last_node->next != NULL)
    {
        p_last_node_prev = p_last_node;
        p_last_node = p_last_node->next;        
    }

    *p_end_data = p_last_node->data;
     p_last_node_prev->next = p_last_node->next;
     free(p_last_node);

    return (SUCCESS);
}


