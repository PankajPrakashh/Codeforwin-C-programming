/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/
 * @lastmodified    11:51 AM, January 4, 2018
 * @description     C programt to convert string to integer using atoi library function.
 *                  
 *                  Syntax - int atoi (const char * str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for atoi()

#define INTEGER_SIZE 20 // Maximum size of integer in string representation


int main()
{
    char number[20];
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
