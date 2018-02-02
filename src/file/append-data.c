/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/02/c-program-append-data-file.html
 * @description     C program to append data to file
 * ----------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000


void readFile(FILE * fPtr);


int main()
{
    /* File pointer to hold reference of input file */
    FILE *fPtr;
    char filePath[100];

    char dataToAppend[BUFFER_SIZE];


    /* Input file path to remove empty lines from user */
    printf("Enter file path: ");
    scanf("%s", filePath);

    /*  Open all file in append mode. */
    fPtr = fopen(filePath, "a");


    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open '%s' file.\n", filePath);
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /* Input string to append from user */
    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(dataToAppend, BUFFER_SIZE, stdin);


    /* Append data to file */
    fputs(dataToAppend, fPtr);


    /* Reopen file in read mode to print file contents */
    fPtr = freopen(filePath, "r", fPtr);

    /* Print file contents after appending string */
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);


    /* Done with file, hence close file. */
    fclose(fPtr);

    return 0;
}



/**
 * Reads a file character by character 
 * and prints on console.
 * 
 * @fPtr    Pointer to FILE to read.
 */
void readFile(FILE * fPtr)
{
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}