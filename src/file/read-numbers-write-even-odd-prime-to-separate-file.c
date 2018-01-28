/**
 * @author          Pankaj Prakash
 * @website         http://codeforwin.org/2018/01/c-program-write-even-odd-prime-numbers-separate-file.html
 * @description     C program to input numbers from file and write even, odd and prime 
 *                  numbers to separate file.
 * ----------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>


/* Function declarations */
int isEven(const int NUM);
int isPrime(const int NUM);


int main()
{
    /* File pointer to hold reference to different files */
    FILE * fPtrIn,
         * fPtrEven, 
         * fPtrOdd, 
         * fPtrPrime;

    
    int num, success;

    /* 
     * Open all files to perform read/write.
     */
    fPtrIn   = fopen("data/numbers.txt", "r");
    fPtrEven = fopen("data/even-numbers.txt" , "w");
    fPtrOdd  = fopen("data/odd-numbers.txt"  , "w");
    fPtrPrime= fopen("data/prime-numbers.txt", "w");


    /* fopen() return NULL if unable to open file in given mode. */
    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL || fPtrPrime == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /* File open success message */
    printf("File opened successfully. Reading integers from file. \n\n");


    do
    {
        // Read an integer and store read status in success.
        success = fscanf(fPtrIn, "%d", &num);

        /*
         * Write prime, even and odd numbers to different files.
         */
        if (isPrime(num))
            fprintf(fPtrPrime, "%d\n", num);
        else if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    } while(success != -1);


    /* Done with all files, hence close all. */
    fclose(fPtrIn);
    fclose(fPtrEven);
    fclose(fPtrOdd);
    fclose(fPtrPrime);

    printf("Data written to files successfully.");


    return 0;
}


/**
 * Check whether a given number is even or not. The function
 * return 1 if given number is odd, otherwise return 0.
 */
int isEven(const int NUM)
{
    return !(NUM & 1);
}


/**
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0. 
 */
int isPrime(const int NUM)
{
    int i;

    // Only positive integers are prime
    if (NUM < 0)
        return 0;
      
    for ( i=2; i<=NUM/2; i++ )    
    {    
        /*   
         * If the number is divisible by any number   
         * other than 1 and self then it is not prime  
         */    
        if (NUM % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;  
}