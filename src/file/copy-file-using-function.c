/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/02/c-program-to-copy-file.html
 * @description     C program to copy contents of one file to another using functions.
 * ----------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>


/* File copy function declaration */
int fcpy(FILE * sourceFile, FILE * destFile);


int main()
{
    /* File pointer to hold reference of input file */
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];

    int count;


    /* Input path of files to compare */
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    /* 
     * Open source file in 'r' and 
     * destination file in 'w' mode 
     */
    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_SUCCESS);
    }


    // Call function to copy file
    count = fcpy(sourceFile, destFile);
    printf("\nFiles copied successfully.\n");
    printf("%d characters copied.\n", count);


    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}



/**
 * Copy file contents character by charcter from 
 * one file to another. 
 * It return total character copied count.
 * 
 * @sourceFile  Pointer to source FILE.
 * @destFile    Pointer to destination FILE.
 */ 
int fcpy(FILE * sourceFile, FILE * destFile)
{
    int  count = 0;
    char ch;

    /*
     * Copy file contents character by character.
     */
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, destFile);

        /* Read next character from source file */
        ch = fgetc(sourceFile);

        /* Increment character copied count */
        count++;
    }

    return count;
}