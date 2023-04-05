/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part four (4)
// Initialize an array and then print the array using only pointer(s)

void part4(){
    int arr[ASIZE];
    int  i4;
    int *ptr4 = arr;    // Pointer to arr[0]

    for (i4 = 0; i4 < ASIZE; i4++)
    {
        *ptr4 = (i4+1)*2;

        // Move pointer to next array element
        ptr4++;
    }

    // Make sure that pointer again points back to first array element
    ptr4 = &arr[0];

    printf("\n\n---- PART FOUR (4) ----------------------------------------------------\n\n");

    printf("This is Part Four (4): Array element manipulation using Pointers.\n\n");

    printf("Array elements: ");
    printArray(arr);
}
