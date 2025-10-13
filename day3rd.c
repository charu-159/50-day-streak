
//find the kth max and minimum 

#include <stdio.h>

int main() {
    int arr[5] = {2, 3, 8, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int i, j, temp;

    // Corrected sorting logic (Bubble Sort style)
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // kth min and max
    printf("\n%dth minimum: %d", k, arr[k - 1]);
    printf("\n%dth maximum: %d", k, arr[size - k]);

    return 0;
}