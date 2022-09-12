#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SUCCESS 1
#define FAILURE 2
#define LIST_DATA_NOT_FOUND 3
#define LIST_EMPTY          4
#define LIST_NOT_EMPTY      5
#define LIST_DATA_FOUND     6

struct node{
    int data;
    struct node* next;
};

/* Helper Routines */
struct node* get_new_node(int new_data);
struct node* search_node(struct node* p_list, int ext_data);

/* Routines that are called by clients to make use of list */

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

int concat_lists(struct node* p_list_1, struct node* p_list_2, 
                    struct node** pp_concat_list); 

int append_list(struct node* p_list_1, struct node* p_list_2); 
int merge_lists(struct node* p_list_1, struct node* p_list_2, 
                struct node** pp_merged_list); 

int to_array(struct node* p_list_1, int** pp_arr, int* p_size); 
int to_list(int* p_arr, int N, struct node** pp_list); 

int get_reversed_list(struct node* p_list, struct node** pp_reversed_list); 
int reverse_list(struct node* p_list); 

void show_list(struct node* p_list, const char* msg);
int destroy_list(struct node* p_list);

void test_suite(void);
void test_suite2(void);


int main(void)
{
    //test_suite();
    test_suite2();

    return (0);
}

struct node* get_new_node(int new_data)
{
    struct node* p_new_node = NULL;

    p_new_node = (struct node*)malloc(sizeof(struct node));
    assert(p_new_node != NULL); 

    p_new_node->data = new_data;
    p_new_node->next = NULL;

    return (p_new_node);

}

struct node* create_list()
{
    struct node* p_list = NULL;

    p_list = get_new_node(-1);
    return (p_list);
}

int insert_at_start(struct node* p_list, int new_data)
{
    struct node* p_new_node = NULL;

    p_new_node = get_new_node(new_data);

    p_new_node->next = p_list->next;
    p_list->next = p_new_node;

    return (1);
}

int insert_at_end(struct node* p_list, int new_data)
{
    struct node* p_new_node = NULL;
    struct node* p_run = NULL;

    p_run = p_list;
    while(p_run->next != NULL)
    {
        p_run = p_run->next;
    }

    p_new_node = get_new_node(new_data);

    p_run->next = p_new_node;
    p_new_node->next = NULL;

    return (SUCCESS);
}

int insert_after_data(struct node* p_list, int ext_data, int new_data)
{
    struct node* p_new_node = NULL;
    struct node* p_ext_node = NULL;

    p_ext_node = search_node(p_list, ext_data);
    if(p_ext_node == NULL)
     {
        printf("List Data Not Found\n");
        return (FAILURE); 
     }

    p_new_node = get_new_node(new_data);
    
    p_new_node->next = p_ext_node->next;
    p_ext_node->next = p_new_node;

    return (SUCCESS);

}

int insert_before_data(struct node* p_list, int ext_data, int new_data)
{
    struct node* p_run = NULL;
    struct node* p_new_node = NULL;
    struct node* p_ext_prev_node = NULL;

    p_ext_prev_node = p_list;
    p_run = p_list->next;
    while(p_run != NULL)
    {
        if(p_run->data == ext_data) 
            break;     
        p_ext_prev_node = p_run;
        p_run = p_run->next;
    }

    p_new_node = get_new_node(new_data);
    
    p_new_node->next = p_ext_prev_node->next;
    p_ext_prev_node->next = p_new_node;

    return (SUCCESS);
    
}

void show_list(struct node* p_list, const char* msg)
{
    if(msg)
        puts(msg);

    struct node* p_run = NULL;
    p_run = p_list->next;

    printf("[START]->");
    while(p_run != NULL)
    {
        printf("[%d]->", p_run->data);
        p_run = p_run->next;
    }
    printf("[END]\n");
}

int destroy_list(struct node* p_list)
{
    struct node* p_run = NULL;
    struct node* p_run_next = NULL;

    p_run = p_list->next;

    while(p_run != NULL)
    {
        p_run_next = p_run->next;
        free(p_run);
        p_run = p_run_next;
    }
    free(p_list);
    return (SUCCESS);
}

struct node* search_node(struct node* p_list, int ext_data)
{
    struct node* p_run = NULL;

    p_run = p_list->next;
    while(p_run != NULL)
    {
        if(p_run->data == ext_data)
            break;
        p_run = p_run->next;   
    }

    return (p_run);
    
}

int get_start(struct node* p_list, int* p_start_data)
{
    int data;

    if(p_list->next == NULL)
       return (LIST_EMPTY);
        
    data = p_list->next->data;
    *p_start_data = data;
    
    return (SUCCESS);
}

int pop_start(struct node* p_list, int* p_start_data)
{
    int data;
    struct node* p_tmp_next= NULL; 

    if(p_list->next == NULL)
       return (LIST_EMPTY);
        
    data = p_list->next->data;
    *p_start_data = data;

    p_tmp_next = p_list->next;

    p_list->next = p_tmp_next->next;

    free(p_tmp_next);
    
    return (SUCCESS);
}


int pop_end(struct node* p_list, int* p_end_data)
{
    struct node* p_run_prev = NULL;
    struct node* p_run = NULL;

    p_run_prev = p_list;
    p_run = p_list->next;
    while(p_run->next != NULL)
    {
        p_run_prev = p_run;
        p_run = p_run->next;
    }

    *p_end_data = p_run->data;

    p_run_prev->next = p_run->next;

    free(p_run);

    return (SUCCESS);
}

int remove_start(struct node* p_list)
{
    struct node* p_tmp_next= NULL; 

    if(p_list->next == NULL)
       return (LIST_EMPTY);
            
    p_tmp_next = p_list->next;

    p_list->next = p_tmp_next->next;

    free(p_tmp_next);
    
    return (SUCCESS);
}

int remove_end(struct node* p_list)
{
    struct node* p_run_prev = NULL;
    struct node* p_run = NULL;

    p_run_prev = p_list;
    p_run = p_list->next;
    while(p_run->next != NULL)
    {
        p_run_prev = p_run;
        p_run = p_run->next;
    }

    p_run_prev->next = p_run->next;

    free(p_run);

    return (SUCCESS);
}


int remove_data(struct node* p_list, int r_data)
{
    struct node* p_run = NULL;
    struct node* p_run_prev = NULL;

    p_run_prev = p_list;
    p_run = p_list->next;
    
    while(p_run != NULL)
    {
        if(p_run->data == r_data)
            break;
        p_run_prev = p_run;
        p_run = p_run->next;   
    }

    if(p_run == NULL)
        return (LIST_DATA_NOT_FOUND);

    p_run_prev->next = p_run->next;

    free(p_run);

    return(SUCCESS);

}

int get_end(struct node* p_list, int* p_end_data)
{
    if(p_list->next == NULL)
        return (LIST_EMPTY);

    struct node* p_run = NULL;

    p_run = p_list;
    while(p_run->next != NULL)
    {
        p_run = p_run->next;
    }

    *p_end_data = p_run->data;
    
    return (SUCCESS);
}

int is_list_empty(struct node* p_list)
{
    if(p_list->next == NULL)
        return (LIST_EMPTY);
    else    
        return (LIST_NOT_EMPTY);
}

int find_data(struct node* p_list, int f_data)
{
    struct node* p_run = NULL;
    struct node* f_node = NULL;

    f_node = search_node(p_list, f_data);
    
    if(f_node == NULL)
        return (LIST_DATA_NOT_FOUND);
    else
        return (LIST_DATA_FOUND);
    
}

int concat_lists(struct node* p_list_1, struct node* p_list_2, 
                    struct node** pp_concat_list)
{
    struct node* p_run = NULL;

    p_run = p_list_1;
    while(p_run->next != NULL)
    {

        p_run = p_run->next;
    }

    p_run->next = p_list_2->next;

    *pp_concat_list = p_list_1;

    return (SUCCESS);
}

void test_suite2(void)
{
    int i;
    struct node* p_list_1 = NULL;
    struct node* p_list_2 = NULL;
    struct node* p_concat_list = NULL;
    int ret;

    p_list_1 = create_list();
    p_list_2 = create_list();

    for(i = 0; i < 5; ++i)
    {
        ret = insert_at_end(p_list_1, (i+1) * 10);
        assert(ret == SUCCESS);
    }
    show_list(p_list_1, "Showing list 1");

    for(i = 0; i < 5; ++i)
    {
        ret = insert_at_end(p_list_2, (i+6) * 10);
        assert(ret == SUCCESS);
    }
    show_list(p_list_2, "Showing list 2");

    ret = concat_lists(p_list_1, p_list_2, &p_concat_list);
    assert(ret == SUCCESS);
    show_list(p_concat_list, "Showing Concatenated List");

    destroy_list(p_list_1);

}


void test_suite(void)
{
    int i;
    struct node* p_list = NULL;
    int ret;
    int data;

     p_list = create_list();

    for(i = 0; i < 5; ++i)
     {
        ret = insert_at_start(p_list, (i + 1) * 10);
        assert(ret == SUCCESS);
     }

    show_list(p_list, "Insert at start");

    for(i = 0; i < 5; ++i)
        {
            ret = insert_at_end(p_list, (i + 6) * 10);
            assert(ret == SUCCESS);
        }

    show_list(p_list, "Insert at end");

    ret = insert_after_data(p_list, 60, 400);
    assert(ret == SUCCESS);
    show_list(p_list, "Insert after 60: 400");

    ret = insert_before_data(p_list, 60, 300);
    assert(ret == SUCCESS);
    show_list(p_list, "Insert before 60: 300");

    ret = get_start(p_list, &data);
    printf("Start Data: %d\n", data);

    ret = get_end(p_list, &data);
    printf("End data: %d\n", data);

    ret = pop_start(p_list, &data);
    printf("After Pop start: %d\n", data);
    show_list(p_list, "After Pop_Start:");

    ret = pop_end(p_list, &data);
    printf("After Pop End: %d\n", data);
    show_list(p_list, "After Pop_End:");

    ret = remove_start(p_list);
    show_list(p_list, "After Remove Start:\n");

    ret = remove_end(p_list);
    show_list(p_list, "After Remove End:\n");

    ret = remove_data(p_list, 400);
    show_list(p_list, "After Remove data 400:\n");

    ret = is_list_empty(p_list);
    if(ret == LIST_EMPTY)
        puts("List is empty");
    else if(ret == LIST_NOT_EMPTY)  
        puts("List is Not Empty");
    else    
        puts("List is Invalid");

    ret = find_data(p_list, 60);
    if(ret == LIST_DATA_NOT_FOUND)
        puts("List Data Not Found");
    else if(ret == LIST_DATA_FOUND)
        puts("List Data Found");

    ret = find_data(p_list, 1000);
    if(ret == LIST_DATA_NOT_FOUND)
        puts("List Data Not Found");
    else if(ret == LIST_DATA_FOUND)
        puts("List Data Found");

    destroy_list(p_list);

}