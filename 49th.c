//Find median in a row-wise sorted matrix
 #include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[100][100];
    int arr[10000]; // enough space for flattened matrix
    int k = 0;

    printf("Enter matrix elements (row-wise sorted):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            arr[k++] = matrix[i][j]; // flatten
        }
    }

    // Sort the flattened array
    qsort(arr, k, sizeof(int), compare);

    // Find median
    int median;
    if (k % 2 == 1) {
        median = arr[k/2];
    } else {
        median = (arr[(k-1)/2] + arr[k/2]) / 2;
    }

    printf("Median is: %d\n", median);

    return 0;
}
