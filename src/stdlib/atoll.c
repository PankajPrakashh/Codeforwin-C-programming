/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/convert-string-to-long-long-using-atoll-c.html
 * @description     C program to convert string to long long using atoll() library function.
 *                  
 *                  Syntax - long long int atoll(const char* str); 
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>     // Used for atoll()


int main()
{
    char number[30];
    long long int bigNum;


    /* Input string representation of integer from user. */
    printf("Enter any integer: ");
    fgets(number, 30, stdin);


    /* Convert string representation of number to integer */
    bigNum = atoll(number);


    /* Use %lld or %lli to print long long type */
    printf("Converted long long int = %lld\n", bigNum);


    return 0;
}