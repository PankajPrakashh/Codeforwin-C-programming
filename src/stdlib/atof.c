/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-double-using-atof-c.html
 * @description     C program to convert string to double using atof() library function.
 *                  
 *                  Syntax - double atof (const char * str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for atof()


int main()
{
    char number[30];
    double decimalNumber;


    /* Input string representation of floating pointer number from user. */
    printf("Enter any number: ");
    fgets(number, 30, stdin);


    /* Convert string representation of number to double */
    decimalNumber = atof(number);


    /* Use %f, %lf, %llf to print floating point number */
    printf("Converted floating point number = %lf\n", decimalNumber);


    return 0;
}