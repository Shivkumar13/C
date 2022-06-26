
/*
    Home
    Learning
    Subscribe!
    Write For Us

C Programming
How to Use Malloc Function to Create Array of Structs
6 months ago
by Hammad Zahid

The struct is a data type similar to the array used in the c programming, but the only difference is that an array contains the values of the same data type whereas the struct contains the values on the basis of user-defined data types. The arrays occupied some spaces on the memory of the system which can be either dynamic or static. The malloc() function is used for the declaration of the dynamic memory.

An array of a struct can be declared either using the static memory or dynamic memory, in this write-up, we will discuss the array of structs using the malloc() function.
How to create an array of structs with malloc function in C

The structs in C programming are used similarly to classes. The execution time of the structs is relatively faster than the classes. To understand the struct, consider the example:

struct employees{

int emp_id;

char emp_name;

};

We have a struct of “employees” which has two further members; emp_int and emp_name. We can form an array using the struct employees as:
	
struct employees employeesData[4];

We have declared an array “employeesData” using the struct “employees” and it has 4 locations to store the values. If we want to access the second elements of the struct array we will use, employeesData[1], and similarly if we want to access the members of the elements we will use, employeesData[1].emp_id.

But here we can also use the malloc() function to use the dynamic memory allocation. The advantage of dynamic memory is that it utilizes the space during the execution of the program according to the requirement. For this, we use the malloc() function, which sends the request to assign a memory block to the heap segment of the memory which stores the data randomly. If the heap memory cannot entertain the request of malloc() due to insufficient space, it returns the null else it assigns the requested block to the malloc() function for the execution of the program.

Now if we want to use the malloc() function for the declaration of the array of struct, the program will be:
*/
	
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{

    typedef struct

    {

        char* emp_name;

        int emp_id;

    } Employees;


    int num=2,i;

    Employees* employeesData = malloc(num * sizeof *employeesData);

   

    for (i = 0; i < num; i++)

    {

        employeesData[i].emp_name=(char*)malloc(sizeof(char*));

       

        printf("Enter employee name :");

        scanf("%s",employeesData[i].emp_name);


        printf("Enter employee id  :");

        scanf("%d",&employeesData[i].emp_id);


    }


    for (i = 0; i < num; i++)

        printf("Employee Name: %s, Employees Id: %d\n",employeesData[i].emp_name,employeesData[i].emp_id);

    return (0);
    
}

/*
We will open a text file, myfile1, with the help of nano editor and paste the above script:
$ nano myfile1.c

Use the GCC compiler to compile the above file:
1
	
$ gcc myfile1.c -o myfile1


Once the file is successfully compiled, run the program using the command:
1
	
$ ./myfile1

The explanation of the above code is:

    First, we have added the libraries of stdlib.h(used for the dynamic memory allocation functions) and stdio.h (used by the other basic functions of the C programming)
    Then in the main function, we passed the argc(argument count) and argv(argument vector) used for the numbers which are input by the users and point to the character pointers respectively
    After this, we have declared the struct of “Employees” having two values emp_id and emp_name
    Initialized the two variables num and i; num has assigned the value of 2 so that it can take two inputs for struct “Employees”
    Then used the malloc function to assign the memory according to the value of num to the pointer array (Employees)
    Took the input from the user and display the values using the for loop

Note: We have to use the “typedef struct” in declaring the struct, by using this we do not have to use the keyword “struct” repeatedly.
Conclusion

The struct data type in C programming provides better performance when we have to deal with small groups of the same values. In this write-up, we have discussed the creation of structs with arrays using the dynamic memory function that is malloc() function. The malloc() function uses only that much block of memory which is required.
About the author
Hammad Zahid

I'm an Engineering graduate and my passion for IT has brought me to Linux. Now here I'm learning and sharing my knowledge with the world.
View all posts
RELATED LINUX HINT POSTS

    Two-Dimensional Array in C
    Relational Operators in C
    Pointers in C
    Logical Operators in C
    Array in C
    Command Line Argument
    Use of strlen, strrev, strlwr and strupr()

Linux Hint LLC, editor@linuxhint.com
1309 S Mary Ave Suite 210, Sunnyvale, CA 94087
Privacy Policy and Terms of Use
An Elite CafeMedia Publisher

*/