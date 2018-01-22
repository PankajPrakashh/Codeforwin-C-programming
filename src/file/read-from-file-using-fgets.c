/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/c-program-read-and-display-file-contents.html
 * @description     C program to read and display file contents line by line using fgets()
 * ----------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000


int main()
{
    /* File pointer to hold reference to our file */
    FILE * fPtr;

    char buffer[BUFFER_SIZE];
    int totalRead = 0;


    /* 
     * Open file in r (read) mode. 
     * "data/file2.txt" is complete file path to read
     */
    fPtr = fopen("data/file2.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /* File open success message */
    printf("File opened successfully. Reading file contents line by line. \n\n");


    /* Repeat this until read line is not NULL */
    while(fgets(buffer, BUFFER_SIZE, fPtr) != NULL) 
    {
        /* Total character read count */
        totalRead = strlen(buffer);


        /*
         * Trim new line character from last if exists.
         */
        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n' 
                                    ? '\0' 
                                    : buffer[totalRead - 1];


        /* Print line read on cosole*/
        printf("%s\n", buffer);

    } 


    /* Done with this file, close file to release resource */
    fclose(fPtr);


    return 0;
}