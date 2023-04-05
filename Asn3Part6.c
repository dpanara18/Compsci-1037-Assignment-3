/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part six (6)
// Copy the contents of the original array (source) from part five (5) into the
// the second array (destination) in reverse order using only pointers

void part6(int *source_ptr, int *dest_ptr, int source_arr[], int dest_arr[], int i5){

    // Pointer to last element of source_arr using the correct array index
    source_ptr = &source_arr[ASIZE-1];
    // Pointer to the first element of dest_arr using the correct array index
    dest_ptr   = &dest_arr[0];
    i5 = ASIZE;

// Write the code that will copy contents of source array into destination array in reverse order:
// source array: 2, 4, 6, 8, 10, 12, 14, 16, 18, 20
// after reverse copy
// destination array:  20, 18, 16, 14, 12, 10, 8, 6, 4, 2
// notice: no comma after the last value

    while(i5 > 0){
        *dest_ptr = *source_ptr;
        dest_ptr++;
        source_ptr--;
        i5--;
    }

    printf("\n\n---- PART SIX (6) ----------------------------------------------------\n\n");

    printf("This is Part Six (1): Pointer use to reverse an array.\n\n");

    // Print source and destination array after reversing
    printf("Source array after reversing: ");
    printArray(source_arr);

    printf("\nDestination array after reversing: ");
    printArray(dest_arr);
}
