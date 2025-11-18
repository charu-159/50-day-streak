//boundary traversal of matrix
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Boundary Traversal:\n");

    // Top row
    for (int j = 0; j < cols; j++) {
        printf("%d ", mat[0][j]);
    }

    // Right column (excluding first row)
    for (int i = 1; i < rows; i++) {
        printf("%d ", mat[i][cols - 1]);
    }

    // Bottom row (excluding last column), only if more than 1 row
    if (rows > 1) {
        for (int j = cols - 2; j >= 0; j--) {
            printf("%d ", mat[rows - 1][j]);
        }
    }

    // Left column (excluding first & last row), only if more than 1 column
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", mat[i][0]);
        }
    }

    return 0;
}