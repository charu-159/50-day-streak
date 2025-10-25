//cyclically rotate an array by one
#include <stdio.h>

void rotate(int arr[], int n) {
    int last = arr[n - 1]; // Store the last element
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; // Shift elements right by one position
    }
    arr[0] = last; // Move last element to the first position
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotate(arr, n); // Call the rotation function

    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
