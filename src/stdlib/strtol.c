/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-to-long-using-strtol-c.html
 * @description     C program to convert string to long using strtol() library function.
 *                  
 *                  Syntax - long strtol (const char * str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for strtol()


int main()
{
    char number[30];
    char* endPtr;

    long bigNumber;
    int base;


    /* Input string representation of number from user. */
    printf("Enter any number: ");
    fgets(number, 30, stdin);


    printf("Enter base: ");
    scanf("%d", &base);


    /* Convert string representation of number to long */
    bigNumber = strtol(number, &endPtr, base);


    /* endPtr points to NULL for failed conversions */
    if(*endPtr)
        printf("Unable to convert '%s' to base %d.", number, base);
    else
        printf("Converted long = %ld\n", bigNumber);


    return 0;
}