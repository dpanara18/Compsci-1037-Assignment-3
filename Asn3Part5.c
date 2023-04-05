/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part five (5)
// Initialize an array using only pointers
// then copy the contents of the first array (source) into a second array (destination)

void part5(){
    int source_arr[ASIZE], dest_arr[ASIZE];
    int  i5;

    int *source_ptr = source_arr;   // Pointer to source_arr
    int *dest_ptr   = dest_arr;     // Pointer to dest_arr

    int *end_ptr;

    for (i5 = 1; i5 <= ASIZE; i5++)
    {
		// initialize each array element in source_arr only using pointer arithmetic (not array indexes)
        *(source_ptr++) = (i5)*2;
    }

    // Pointer to last element of source_arr
    end_ptr = &source_arr[ASIZE-1];

    // Pointing back to the first element of the array
    source_ptr = &source_arr[0];

    printf("\n\n\n---- PART FIVE (5) ----------------------------------------------------\n\n");

    printf("This is Part Five (5): Array manipulation using pointer refrencing.\n\n");

    // Print source and destination array before copying
    printf("\nSource array before copying: ");
    printArray(source_arr);

    printf("\nDestination array before copying: ");  // indeterminate output since dest_arr has not been initialized
    printArray(dest_arr);

// Write the code that will copy the contents of the original array (source) into the
// the second array (destination) in the same order using only pointers
// contents of source array: 2, 4, 6, 8, 10, 12, 14, 16, 18, 20
// after copy - the contents of destination array will be:
//           2, 4, 6, 8, 10, 12, 14, 16, 18, 20
// notice: no comma after the last value

    for(i5 = 0; i5 < ASIZE; i5++){
        *dest_ptr = *source_ptr;
        dest_ptr++;
        source_ptr++;
    }

    // Pointing back to the first element of the array
    dest_ptr = &dest_arr[0];
    source_ptr = &source_arr[0];

    // Print source and destination array after copying
    printf("\n\nSource array after copying: ");
    printArray(source_arr);

    printf("\nDestination array after copying: ");
    printArray(dest_arr);

    part6(source_ptr, dest_ptr, source_arr, dest_arr, i5);
}
