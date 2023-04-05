/* CS1037a 2022 */
/* Assignment 03 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 29/10/2022 */

#include "headers.h"

int main()
{

    char repeat = 'y';

    while(repeat == 'y'){
    printf("\n------------ASSIGNMENT THREE (3) CS1037a----- DPANARA -----------\n\n");
    part1();
    part2();
    part3();
    part4();
    part5();

    printf("\n\n----------------------------------------------------------------------\n\n");

    printf("\n------------ASSIGNMENT THREE (3) CS1037a----- DPANARA -----------\n\n");

    printf("\nDo you want to run the code again? (y-yes, n-no) ");
    scanf("%s", &repeat);
    }

    return 0;
}
