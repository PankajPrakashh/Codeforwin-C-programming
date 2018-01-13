/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-to-unsigned-long-long-using-strtoull-c.html
 * @description     C program to convert string to unsigned long long int using strtoull() 
 *                  library function.
 *                  
 *                  Syntax - unsigned long long int strtoll(const char* str, char** endPtr, int base); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for strtoull()


int main()
{
    char number[30];
    char* endPtr;

    unsigned long long int bigNumber;
    int base;


    /* Input string representation of number from user. */
    printf("Enter any number: ");
    fgets(number, 30, stdin);


    /* Input base of input string */
    printf("Enter base: ");
    scanf("%d", &base);


    /* Convert string representation of number to unsigned long long */
    bigNumber = strtoull(number, &endPtr, base);


    /* endPtr points to NULL for failed conversions */
    if(*endPtr)
        printf("Unable to convert '%s' to base %d.", number, base);
    else
        printf("Converted unsigned long long int = %llu\n", bigNumber);


    return 0;
}