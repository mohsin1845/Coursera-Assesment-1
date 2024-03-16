/********************************************************************************
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
 * @file stats.h
 * @brief Header file for statistics functions
 *
 * This file contains the function declarations for calculating statistics
 * on a set of numbers, including minimum, maximum, mean, median, and sorting.
 *
 * @author Mohsin Najar
 * @date 16/03/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes an array of unsigned char data items and its length, 
 * and prints the statistics including minimum, maximum, mean, and median.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 */
void print_statistics(unsigned char* arr, unsigned int length);

/**
 * @brief Prints the elements of an array along with their indices.
 *
 * This function takes an array of unsigned char data items and its length,
 * and prints each element of the array along with its index.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 */
void print_array(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the median value of an array.
 *
 * This function takes an array of unsigned char data items and its length,
 * and returns the median value of the array.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 * @return The median value of the array
 */
unsigned char find_median(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the mean value of an array.
 *
 * This function takes an array of unsigned char data items and its length,
 * and returns the mean value of the array.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 *
 * This function takes an array of unsigned char data items and its length,
 * and returns the maximum value in the array.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 * @return The maximum value in the array
 */
unsigned char find_maximum(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 *
 * This function takes an array of unsigned char data items and its length,
 * and returns the minimum value in the array.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 * @return The minimum value in the array
 */
unsigned char find_minimum(unsigned char* arr, unsigned int length);

/**
 * @brief Sorts an array from largest to smallest.
 *
 * This function takes an array of unsigned char data items and its length,
 * and sorts the array from largest to smallest.
 *
 * @param arr Pointer to an array of unsigned char data items
 * @param length Size of the array
 */
void sort_array(unsigned char* arr, unsigned int length);

#endif /* __STATS_H__ */




