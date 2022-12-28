#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void int_single_instance(void);

int main(void)
{
    exit(EXIT_SUCCESS);
}


void int_single_instance(void)
{
    int* p = NULL; // S1
    int m;

    p = (int*)malloc(sizeof(int)); // S2

    // S3
    if(p == NULL)
    {
        fprintf(stderr, "fatal:out of virtual address space\n");
        exit(EXIT_FAILURE);
    }

    memset(p, 0, sizeof(int)); // S4

    *p = 100; // S5: write
    m = *p;  // S5: Read

    printf("m = %d\n", m);

    free(p);  // S6
    p = NULL; // S7
}

/*
Very Important:
    - In C Programming language, there is no statement by using which we can allocate memory at run time and controll the 
    lifetime of that memory, then what about malloc() calloc()?

    - This is the only finer point that, malloc() and calloc()  are C library functions
    - If malloc() and calloc() doesn't take any other thing's help, then we could have said that C programming language itself gave you
    the malloc() and calloc() functions
    - malloc() calloc() realloc() free() all these functions call OS functions
    - So without Operating System's help, dynamic memory allocation won't work
*/

/*
    - malloc() does dynamic memory allocation
    - If malloc() is successfully returned in your program, then definitely there is more memory allocated in your
    program's virtual address space.
    - This memory will be contiguous. And the address of lowest byte will be returned by malloc()

    malloc(N); // Pre: N > 0

    - malloc() doesn't know for which datatype's instance or which datatype's instance's array is being allocated
      So malloc() return type would be `void*`

    - returning an address and not commiting to a type

*/

/*
Static Time: Source finish -> Executable/DLL [this is static time period tayar hone]
           - Time elapsed in the building of source code (Preprocessing -> Compile -> assemble -> link)
           - Static Linking, Static Memory allocation

Run time/Dynamic Time:    Launch exe -> Terminate Process/application
           - Runtime memory allocation, dynamic linking so we call it as dynamic link library


- How to check if the memory is allocated dynamically or statically for a variable?
    -> check the size of exe `$size exe_path`
    -> Even if you keep on increasing allocating the variables in a function without `static` keyword.
        Size of EXE won't increase, this proves that memory is allocated dynamically on the function call.
    -> Text, Data, BSS :- If you declare a variable globally and initialize then it goes to DATA section
                          If you declare and do not initialize the variable globally then it goes to BSS

     If memory is allocated dynamically so you won't be able to see the increase in the EXE size.
*/