//boolean matrix problem(set row/column to 1 if any element is one)
#include <stdio.h>

#define R 3
#define C 4

void setMatrix(int mat[R][C]) {
    int row[R] = {0};
    int col[C] = {0};

    // Step 1: Mark rows and columns that need to be updated
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Update matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }
}

void printMatrix(int mat[R][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[R][C] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };

    printf("Original Matrix:\n");
    printMatrix(mat);

    setMatrix(mat);

    printf("\nModified Matrix:\n");
    printMatrix(mat);

    return 0;
}