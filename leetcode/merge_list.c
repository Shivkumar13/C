#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* create_list();
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);

int main(void)
{

     struct ListNode* list1 = create_list();
     struct ListNode* list2 = create_list();

    for(i = 0; i < 5; ++i)
    {
        
    }
     mergeTwoLists(list1, list2);
}


struct ListNode* get_new_node(int data)
{
    struct ListNode* new_node = NULL;
    
    new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    new_node->val = data;
    new_node->next = NULL;
    
    return (new_node);
}

struct ListNode* create_list()
{
    struct ListNode* p_new_list = NULL;

    p_new_list = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(p_new_list != NULL);

    return (p_new_list);

}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* p_merge_list = NULL;
    struct ListNode* p_run1 = NULL;
    struct ListNode* p_run2 = NULL;

    p_merge_list = create_list();

    while(1)
    {
        if(list1 == NULL)
        {
            p_run1 = list2->next;
            while(p_run1 != NULL)
            {
                p_merge_list->next = p_run1->next;
                p_run1 = p_run1->next; 
            }
        }

        if(list2 == NULL)
        {
            p_run2 = list1->next;
            while(p_run2 != NULL)
            {
                p_merge_list->next = p_run2->next;
                p_run2 = p_run2->next;
            }
        }

        p_run1 = list1->next;
        while(p_run1 != NULL)
        {
            p_merge_list->next = p_run1->next;
            p_run1 = p_run1->next;
        }

        p_run2 = list2->next;
        while(p_run2 != NULL)
        {
            p_merge_list->next = p_run2->next;
            p_run2 = p_run2->next;
        }

        if(p_run1->val <= p_run2->val)
        {
            p_merge_list->val = p_run1->val;
        }
        else
        {
            p_merge_list->val = p_run2->val;
        }

        return (p_merge_list);

    }

}