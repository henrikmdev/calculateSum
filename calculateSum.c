#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to allocate and initialize an array of random integers
int* createArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    for (int i = 0; i <= size; i++) {
        arr[i] = rand() % 100; // Initialize with random numbers between 0 and 99
    }

    return arr;
}

// Function to calculate the sum of an array
int calculateSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int size = 5;
    int* numbers = createArray(size);

    if (numbers == NULL) {
        return 1; // Exit if array allocation failed
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int total = calculateSum(numbers, size);

    printf("Sum of array elements: %d\n", total);

    free(numbers);
    return 0;
}
