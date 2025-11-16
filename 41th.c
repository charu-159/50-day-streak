//set entire row and column to 0 if any element is 0
#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    int rowFlag[ROW] = {0};
    int colFlag[COL] = {0};

    // Step 1: Mark rows and columns that need to be zeroed
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (matrix[i][j] == 0) {
                rowFlag[i] = 1;
                colFlag[j] = 1;
            }
        }
    }

    // Step 2: Update matrix
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (rowFlag[i] == 1 || colFlag[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Print result
    printf("Updated Matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}