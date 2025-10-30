//find duplicate number in array
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate found: %d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No duplicate found\n");
    return 0;
}