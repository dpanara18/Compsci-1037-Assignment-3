/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

// --------------------------------------------------------------------------------------------
// part one (1)
// simple declaration and definition of a pointer variable
// display memory addresses

void part1(){
    int num = 10;
    int *ptr;

    // Stores the address of num to pointer type
    ptr = &num;

    printf("\n\n---- PART ONE (1) ----------------------------------------------------\n\n");

// If these printout statements display a compiler warning: format XXXX expects argument type..'
// ignore this warning. THe purpose is to diaplay the value in specified format(s)
    printf("This is Part One (1): Pointer Declaration and Definition.\n\n");
    printf("Address of num: \nin decimal: %d\nin hex: %x\nas a pointer: %p\n", ptr, ptr, ptr);
    printf("Value stored in the variable num = %d\n\n", num);

    printf("Address of ptr: \nin decimal: %d\nin hex: %x\nas a pointer: %p\n", &ptr, &ptr, &ptr);
    printf("Value stored in the variable ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
}
