#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct vector_of_integers* create_vector_of_integers();
int append_element_to_vector(struct vector_of_integers* p_vector, int element);
void show_vector(struct vector_of_integers* p_vector, const char* msg);
void destroy_vector(struct vector_of_integers* p_vector);

/* Dynamically resizable array is called as Vector */

struct vector_of_integers
{
    int* p_arr;
    long long int number_of_elements;
};

int main(void)
{

    struct vector_of_integers* p_vec1 = NULL;
    struct vector_of_integers* p_vec2 = NULL;
    int status;
    int element;
    int choice;

    p_vec1 = create_vector_of_integers();
    p_vec2 = create_vector_of_integers();

    status = append_element_to_vector(p_vec1, 5);
    assert(status == 1);

    status = append_element_to_vector(p_vec1, 10);
    assert(status == 1);

    status = append_element_to_vector(p_vec1, 15);
    assert(status == 1);

    status = append_element_to_vector(p_vec1, 20);
    assert(status == 1);

    while(1)
    {
        puts("Do you still want to add the elements? [1]->Yes|Anything else-> No");
        scanf("%d", &choice);
        if(choice != 1)
            break;
        puts("Enter the element:");
        scanf("%d", &element);

        status = append_element_to_vector(p_vec2, element);
        assert(status == 1);
    }

    show_vector(p_vec1, "Displaying first vector");
    
    show_vector(p_vec2, "Displaying second vector");

    destroy_vector(p_vec1);
    p_vec1 = NULL;

    destroy_vector(p_vec2);
    p_vec2 = NULL;

    exit(0);
}

struct vector_of_integers* create_vector_of_integers(void)
{
    struct vector_of_integers* p_vector = NULL;

    p_vector = (struct vector_of_integers*)malloc(sizeof(struct vector_of_integers));
    assert(p_vector != 0);

    p_vector->p_arr = NULL;
    p_vector->number_of_elements = 0;

    return (p_vector);
}

int append_element_to_vector(struct vector_of_integers* p_vector, int element)
{
    p_vector->number_of_elements = p_vector->number_of_elements + 1;
    p_vector->p_arr = (int*)realloc(p_vector->p_arr, p_vector->number_of_elements * sizeof(int));
    assert(p_vector->p_arr != NULL);
    p_vector->p_arr[p_vector->number_of_elements - 1] = element;

    return (1);
}

void show_vector(struct vector_of_integers* p_vector, const char* msg)
{
    long long int i;

    if(msg)
        puts(msg);

    for(i = 0; i < p_vector->number_of_elements; ++i)
        printf("%d\n", p_vector->p_arr[i]);

}

void destroy_vector(struct vector_of_integers* p_vector)
{
    if(p_vector->p_arr != NULL)
        free(p_vector->p_arr);
    free(p_vector);
    p_vector = NULL;
}







