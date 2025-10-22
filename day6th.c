//sort of an array of 0s,1s,2s(dutch nationa; flag problem
#include <stdio.h>

int main() {
    int n, count_01 = 0, count_02 = 0, count_00 = 0, index = 0;

    // Input the number of elements
    printf("Enter the number of elements (only 0, 1, 2): ");
    scanf("%d", &n);

    int arr[n]; // Initialize array

    // Input value elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] != 0 && arr[i] != 1 && arr[i] != 2) {
            printf("Invalid element: %d\n", arr[i]);
            return 1; // Exit if invalid input is found
        }
    }

    // Step 1: Count the number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count_00++;
        else if (arr[i] == 1)
            count_01++;
        else if (arr[i] == 2)
            count_02++;
    }

    // Step 2: Overwrite the array with the sorted values
    index = 0;

    for (int i = 0; i < count_00; i++)
        arr[index++] = 0;

    for (int i = 0; i < count_01; i++)
        arr[index++] = 1;

    for (int i = 0; i < count_02; i++)
        arr[index++] = 2;

    // Step 3: Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
