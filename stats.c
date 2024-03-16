/******************************************************************************
 * Copyright (C) 2024 by Mohsin
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Mohsin is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

/**
 * @file stats.c
 * @brief Implementation file for statistics functions
 *
 * This file contains the implementation of functions to calculate statistics
 * on a set of numbers, including minimum, maximum, mean, median, and sorting.
 *
 * @author Mohsin Najar
 * @date 16/03/2024
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/******************************************************************************
 * Function: main
 * Description:
 *     Entry point for the program. Initializes an array of data and prints its
 *     original content, then sorts the array and prints statistics.
 * Parameters:
 *     None
 * Return: 
 *     None
 *****************************************************************************/
void main() {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                   7,  87, 250, 230,  99,   3, 100,  90};
    unsigned int length = SIZE;

    // Display original data
    printf("Original Data:\n");
    print_array(test, length);

    // Sort the array
    sort_array(test, length);
    printf("\n");

    // Display statistics
    print_statistics(test, length);
}

/******************************************************************************
 * Function: print_statistics
 * Description:
 *     Prints the statistics of an array including minimum, maximum, mean, and median.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     None
 *****************************************************************************/
void print_statistics(unsigned char* arr, unsigned int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(arr, length));
    printf("Maximum: %d\n", find_maximum(arr, length));
    printf("Mean: %d\n", find_mean(arr, length));
    printf("Median: %d\n", find_median(arr, length));
}

/******************************************************************************
 * Function: print_array
 * Description:
 *     Prints the elements of an array along with their indices.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     None
 *****************************************************************************/
void print_array(unsigned char* arr, unsigned int length) {
   
}

/******************************************************************************
 * Function: find_median
 * Description:
 *     Finds the median value of an array.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     The median value of the array
 *****************************************************************************/
unsigned char find_median(unsigned char* arr, unsigned int length) {
   
}

/******************************************************************************
 * Function: find_mean
 * Description:
 *     Finds the mean value of an array.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     The mean value of the array
 *****************************************************************************/
unsigned char find_mean(unsigned char* arr, unsigned int length) {
}
    

/******************************************************************************
 * Function: find_maximum
 * Description:
 *     Finds the maximum value in an array.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     The maximum value in the array
 *****************************************************************************/
unsigned char find_maximum(unsigned char* arr, unsigned int length) {

}

/******************************************************************************
 * Function: find_minimum
 * Description:
 *     Finds the minimum value in an array.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     The minimum value in the array
 *****************************************************************************/
unsigned char find_minimum(unsigned char* arr, unsigned int length) {
   
}

/******************************************************************************
 * Function: sort_array
 * Description:
 *     Sorts the array from largest to smallest.
 * Parameters:
 *     unsigned char* arr: Pointer to an array of unsigned char data items
 *     unsigned int length: Size of the array
 * Return: 
 *     None
 *****************************************************************************/
void sort_array(unsigned char* arr, unsigned int length) {
   
}



