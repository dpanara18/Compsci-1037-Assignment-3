/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part two (2)
// use pointer variables to create basic equations of addition, subtraction, multiplication and division

void part2(){
    float fnum1, fnum2;    // Normal variables
    float *ptr1, *ptr2;  // Pointer variables

    float sum, diff, mult, div;

    ptr1 = &fnum1; // ptr1 stores the address of fnum1
    ptr2 = &fnum2; // ptr2 stores the address of fnum2

    printf("\n\n---- PART TWO (2) ----------------------------------------------------\n\n");

    printf("This is Part Two (2): Basic example of using pointers in equations.\n\n");

    // User input using the two pointers to floating variables: *ptr1, *ptr2
    printf("Enter any two real numbers and then hit <Enter>: ");
    scanf("%f%f", ptr1, ptr2);

    // Perform arithmetic operation using pointer refrences only
    sum  = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div  = (*ptr1) / (*ptr2);

    // Print the results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", mult);
    printf("Quotient = %.2f\n", div);
}
