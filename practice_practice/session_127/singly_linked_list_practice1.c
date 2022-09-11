#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define FAILURE 2
#define SUCCESS 1

#define LIST_DATA_NOT_FOUND 3

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



void show_list(struct node* p_list, const char* msg);
int destroy_list(struct node* p_list);

void test_suite(void);

int main(void)
{
    test_suite();
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

void test_suite(void)
{
    int i;
    struct node* p_list = NULL;
    int ret;

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

    destroy_list(p_list);

}