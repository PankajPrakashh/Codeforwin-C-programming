/**
 * @author          Pankaj Prakash
 * @website         http://www.codeforwin.in/
 * @lastmodified    12:24 AM, January 5, 2017
 * @description     C program to find the minimum and maximum limits of data types.
 *                  This program make use of pre-defined macros to get the maximum and
 *                  and minimum limits of the types. These macros are defined in two
 *                  header files limits.h and float.h
 * ------------------------------------------------------------------------------------- */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    /* Character types */
    printf("Minimum limit of signed char = %d\n", SCHAR_MIN);
    printf("Maximum limit of signed char = %d\n", SCHAR_MAX);
    printf("Maximum limit of unsigned char = %d\n\n", UCHAR_MAX);

    /* Short integer types */
    printf("Minimum limit of signed short int = %d\n", SHRT_MIN);
    printf("Maximum limit of signed short int = %d\n", SHRT_MAX);
    printf("Maximum limit of unsigned short int = %d\n\n", USHRT_MAX);

    /* Integer types */
    printf("Minimum limit of signed int = %d\n", INT_MIN);
    printf("Maximum limit of signed int = %d\n", INT_MAX);
    printf("Maximum limit of unsigned int = %lld\n\n", UINT_MAX);

    /* Long integer types */
    printf("Minimum limit of signed long int = %ld\n", LONG_MIN);
    printf("Maximum limit of signed long int = %ld\n", LONG_MAX);
    printf("Maximum limit of unsigned long int = %lld\n\n", ULONG_MAX);

    /* Long long integer types */
    printf("Minimum limit of signed long long int = %lld\n", LONG_LONG_MIN); // LLONG_MIN on some compilers
    printf("Maximum limit of signed long long int = %lld\n", LONG_LONG_MAX); // LLONG_MAX on some compilers
    printf("Maximum limit of unsigned long long int = %llu\n\n", ULONG_LONG_MAX); // ULLONG_MAX on some compilers

    /* Float types */
    printf("Minimum limit of float = %e\n", FLT_MIN);
    printf("Maximum limit of float = %e\n\n", FLT_MAX);

    /* Double types */
    printf("Minimum limit of double = %e\n", DBL_MIN);
    printf("Maximum limit of double = %e\n\n", DBL_MAX);

    /* Long double types */
    printf("Minimum limit of long double = %e\n", LDBL_MIN);
    printf("Maximum limit of long double = %e\n", LDBL_MAX);

    return 0;
}
