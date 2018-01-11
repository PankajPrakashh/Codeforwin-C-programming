/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-unsigned-long-using-strtoul-c
 * @description     C program to convert string to unsigned long int using strtoul() 
 *                  library function.
 *                  
 *                  Syntax - unsigned long int strtoul(const char* str, char** endPtr, int base); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for strtoul()


int main()
{
    char number[30];
    char* endPtr;

    unsigned long int bigNumber;
    int base;


    /* Input string representation of number from user. */
    printf("Enter any number: ");
    gets(number);


    printf("Enter base: ");
    scanf("%d", &base);


    /* Convert string representation of number to unsigned long */
    bigNumber = strtoul(number, &endPtr, base);


    /* endPtr points to NULL for failed conversions */
    if(*endPtr)
        printf("Unable to convert '%s' to base %d.", number, base);
    else
        printf("Converted unsigned long int = %lu\n", bigNumber);


    return 0;
}