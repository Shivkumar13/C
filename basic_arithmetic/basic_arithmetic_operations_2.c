#include <stdio.h>
#include <stdlib.h>

int first;
int second;
int summation;
int subtraction;
int multiplication;
int quotient;
int remainder;

int main(void)
{

printf("Hello, Enter first number:");
scanf("%d", &first);

printf("Enter second number:");
scanf("%d", &second);

printf("Entered number are %d and %d\n", first, second);

summation = first + second;
subtraction = first - second;
multiplication = first * second;
quotient = first / second; 
remainder = first % second;

printf("Summation of %d and %d is: %d\n", first, second, summation);
printf("Subtraction of %d and %d is: %d\n", first, second, subtraction);
printf("Multiplication of %d and %d is: %d\n", first, second, multiplication);
printf("Quotient of %d and %d is: %d\n", first, second, quotient);
printf("Remainder of %d and %d is: %d\n", first, second, remainder);

exit(0);
}