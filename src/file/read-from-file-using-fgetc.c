/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/c-program-read-and-display-file-contents.html
 * @description     C program to read and display file contents character by character 
 *                  using fgetc()
 * ----------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    /* File pointer to hold reference to our file */
    FILE * fPtr;

    char ch;


    /* 
     * Open file in r (read) mode. 
     * "data/file1.txt" is complete file path to read
     */
    fPtr = fopen("data/file1.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /* File open success message */
    printf("File opened successfully. Reading file contents character by character. \n\n");

    do 
    {
        /* Read  single character from file */
        ch = fgetc(fPtr);

        /* Print character read on cosole*/
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);


    return 0;
}