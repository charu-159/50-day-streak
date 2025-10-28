// Find all pairs with a given sum
#include <stdio.h>

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target_sum = 6;
    int found = 0;

    printf("Pairs with sum %d:\n", target_sum);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("No pairs found.\n");

    return 0;
}
