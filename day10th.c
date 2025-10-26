//leaders in an array
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array are: ");

    // Loop from left to right
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                break;
            }
        }
        if (j == n) { // If no larger element found on the right
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
