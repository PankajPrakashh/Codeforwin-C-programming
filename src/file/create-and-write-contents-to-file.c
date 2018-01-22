/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/c-program-create-file-write-contents.html
 * @description     C program to create and write contents to a file.
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    /* Variable to store user content */
    char data[DATA_SIZE];

    /* File pointer to hold reference to our file */
    FILE * fPtr;


    /* 
     * Open file in w (write) mode. 
     * "data/file1.txt" is complete path to create file
     */
    fPtr = fopen("data/file1.txt", "w");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_SUCCESS);
    }


    /* Input contents from user to store in file */
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);


    /* Write contents to file */
    fputs(data, fPtr);


    /* Close file to save contents */
    fclose(fPtr);


    /* Success message */
    printf("File created and saved successfully. :) \n");


    return 0;
}