/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-to-long-using-atol-function-c.html
 * @description     C program to convert string to long using atol() library function.
 *                  
 *                  Syntax - long int atol (const char * str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for atol()


int main()
{
    char number[30];
    long bigNum;


    /* Input string representation of integer from user. */
    printf("Enter any integer: ");
    fgets(number, 30, stdin);


    /* Convert string representation of number to integer */
    bigNum = atol(number);


    /* Use %d, %i, %l, %ld, %li to print long type */
    printf("Converted long int = %ld\n", bigNum);


    return 0;
}