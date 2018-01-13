/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-to-long-long-using-strtoll-c.html
 * @description     C program to convert string to long long int using strtoll() 
 *                  library function.
 *                  
 *                  Syntax - long long int strtoll(const char* str, char** endPtr, int base); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for strtoll()


int main()
{
    char number[30];
    char* endPtr;

    long long int bigNumber;
    int base;


    /* Input string representation of number from user. */
    printf("Enter any number: ");
    fgets(number, 30, stdin);


    printf("Enter base: ");
    scanf("%d", &base);


    /* Convert string representation of number to long long */
    bigNumber = strtoll(number, &endPtr, base);


    /* endPtr points to NULL for failed conversions */
    if(*endPtr)
        printf("Unable to convert '%s' to base %d.", number, base);
    else
        printf("Converted long long int = %lld\n", bigNumber);


    return 0;
}