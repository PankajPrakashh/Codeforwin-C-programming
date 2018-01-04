/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/c-program-convert-string-integer-using-atoi-function.html
 * @description     C program to convert string to integer using atoi() library function.
 *                  
 *                  Syntax - int atoi (const char * str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for atoi()


int main()
{
    char number[30];
    int  num;


    /* Input string representation of integer from user. */
    printf("Enter any integer: ");
    gets(number);


    /* Convert string representation of number to integer */
    num = atoi(number);


    /* Print converted integer */
    printf("Converted integer = %d\n", num);


    return 0;
}