#include <stdio.h>
#include <stdlib.h>

/*
    Offset of macro:
    Use?  Given a structure name and member name,
    the offset of macro returns the 'OFFSET' of member
    relative to a given structure WITHOUT creating 
    an instance or a pointer of a structure

    #define OFFSET_OF(type, mem) (unsigned long long int)(&((type*)0)->mem)
*/

/* 
    Container of Macro:
    You have been given a structure name.
    member name, and an address of the member in
    one of structure instances.

    You have to find the base address of instance

    struct A { int a, char b, float c};

    struct A inA1;
    struct A inA2;
    struct C inA3;

    addr is address of 'c' field of one of the structure 
    instance
*/

#define OFFSET_OF(type, member)  (unsigned long long int)((&((type*)0)->member))

#define CONTAINER_OF(addr, type, member)  ((type*)(((unsigned long long int)addr) - OFFSET_OF(type, member)))