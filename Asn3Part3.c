/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part three (3)
// function calls, passing by value and passing by reference using pointer variables

void part3(){
    int inum1, inum2;



    printf("\n\n---- PART THREE (3) ---------------------------------------------------\n\n");

    printf("This is Part Three (3): Pointer use in function calls.\n\n");
    // Input numbers
    printf("Enter two non-identical numbers and then hit <Enter>: ");
    scanf("%d%d", &inum1, &inum2);

    // Print original values of num1 and num2
    printf("Before swapping ( values in <main> function )\n");
    printf("Value of num1 = %d \n", inum1);
    printf("Value of num2 = %d \n\n", inum2);

    // Pass the addresses of num1 and num2
    swap_by_value(inum1, inum2);

    // Print the swapped values of num1 and num2
    printf("After swapping ( values in <main> function )\n");
    printf("Value of num1 = %d \n", inum1);
    printf("Value of num2 = %d \n\n", inum2);
    // Pass the addresses of num1 and num2
    swap_by_reference(&inum1, &inum2);

    // Print the swapped values of num1 and num2
    printf("After swapping ( values in <main> function )\n");
    printf("Value of num1 = %d \n", inum1);
    printf("Value of num2 = %d \n", inum2);
}
