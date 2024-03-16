#include <stdio.h>
#include "stats.h"
#define SIZE (40)
void main() {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                   7,  87, 250, 230,  99,   3, 100,  90};
    unsigned int length = SIZE;


    printf("Original Data:\n");
    print_array(test, length);

    sort_array(test, length);
    printf("\n");

    
    print_statistics(test, length);
}
void print_statistics(unsigned char* arr, unsigned int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(arr, length));
    printf("Maximum: %d\n", find_maximum(arr, length));
    printf("Mean: %d\n", find_mean(arr, length));
    printf("Median: %d\n", find_median(arr, length));
}
void print_array(unsigned char* arr, unsigned int length) {
    printf("Data Array:\n");
    for (unsigned int i = 0; i < length; ++i) {
        printf("Index %d: %d\n", i, arr[i]);
    }
}
unsigned char find_median(unsigned char* arr, unsigned int length) {
    sort_array(arr, length);
    if (length % 2 == 0) {
        return (arr[length / 2 - 1] + arr[length / 2]) / 2;
    } else {
        return arr[length / 2];
    }
}
unsigned char find_mean(unsigned char* arr, unsigned int length) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; ++i) {
        sum += arr[i];
    }
    return sum / length;
}
unsigned char find_maximum(unsigned char* arr, unsigned int length) {
    unsigned char max = arr[0];
    for (unsigned int i = 1; i < length; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
unsigned char find_minimum(unsigned char* arr, unsigned int length) {
    unsigned char min = arr[0];
    for (unsigned int i = 1; i < length; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
void sort_array(unsigned char* arr, unsigned int length) {
    for (unsigned int i = 0; i < length - 1; ++i) {
        for (unsigned int j = 0; j < length - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



