//check if array is sorted and rotated
#include <stdio.h>
#include <stdbool.h>

bool isSortedAndRotated(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        // Compare each element with the next (circularly)
        if (arr[i] > arr[(i + 1) % n])
            count++;
    }

    // If there's exactly one drop, it's sorted and rotated
    return count == 1;
}

int main() {
    int arr[] = {3, 4, 5, 1, 2}; // Try changing this
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAndRotated(arr, n))
        printf("Array is sorted and rotated.\n");
    else
        printf("Array is NOT sorted and rotated.\n");

    return 0;
}