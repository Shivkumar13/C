#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node
{
   int data;
   struct node* next;
};

int main(void)
{
    int num;
    int choice;
     
    struct node* p_start_node = NULL;
    struct node* p_run = NULL;
    struct node* tmp_next = NULL;
    
    while(1)
    {
    puts("Do you further want to add any number? [Yes->1|No->AnythingElse]:");
    scanf("%d", &choice);
    
    if(choice != 1)
    	break;
    
    puts("Enter an element:");
    scanf("%d", &num);
    
    if(p_start_node == NULL)
    {
    	p_start_node = (struct node*)malloc(sizeof(struct node));
    	assert(p_start_node != NULL);
    	
    	p_start_node->data = num;
    	p_start_node->next = NULL;
    	continue;
    }    
    
    p_run = p_start_node;
    while(p_run->next != NULL)
    {
    	p_run = p_run->next;
    }
    
    p_run->next = (struct node*)malloc(sizeof(struct node));
    assert(p_run->next != NULL);
    
    p_run->next->data = num;
    p_run->next->next = NULL;
        		
}
    
    
    p_run = p_start_node;
    while(p_run != NULL)
    {
    	printf("Address(p_run) = %llu, Data at address p_run->data=%d\n", (unsigned long long int)p_run, p_run->data);
	p_run = p_run->next;    	
    }
    
    p_run = p_start_node;
    while(p_run != NULL)
    {
    	tmp_next = p_run->next;
    	printf("Freeing address at node %llu\n", p_run);
    	free(p_run);
    	   	
    	p_run = tmp_next;
    
    }
    p_start_node = NULL;
    
    
    return(0);
}
