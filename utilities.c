/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

/*
 * Function to swap two numbers
 */
void swap_by_value(int num1, int  num2)
{
    int temp;

    // Copy the value of num1 to some temp variable
    temp = num1;

    // Copy the value of num2 to num1
    num1= num2;

    // Copy the value of num1 stored in temp to num2
    num2= temp;

    printf("After swapping ( values in <swap by value> function )\n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
}

void swap_by_reference(int  *num1, int  *num2)
{
    int temp;

    // Copy the value of num1 to some temp variable
    temp = *num1;

    // Copy the value of num2 to num1
   *num1= *num2;

    // Copy the value of num1 stored in temp to num2
    *num2= temp;

    printf("After swapping ( values in <swap by reference> function )\n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}

void printArray(int *arr)
{
   int i;

// Write the code that will print out the contents of the passed in array
// using only pointer refrence and not array indexes
// notice: no comma after the last value

    for(i = 0; i < ASIZE; i++, arr++){
        printf("%d", *arr);
        if (++i < ASIZE)
            printf(", ");
        i--;
    }
}
