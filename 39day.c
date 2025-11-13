//spiral traversal of a matrix
#include <stdio.h>

void spiralPrint(int m, int n, int a[m][n]) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        // Print bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        // Print left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
}

int main() {
    int m = 3, n = 4;
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Spiral traversal of matrix:\n");
    spiralPrint(m, n, a);
    return 0;
}
