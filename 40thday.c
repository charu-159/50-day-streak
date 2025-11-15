//matrix multiplication
#include <stdio.h>

int main() {
    int m, n, p;
    
    // Example sizes
    m = 2;  // rows of A
    n = 3;  // cols of A = rows of B
    p = 2;  // cols of B
    
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} };
    int C[2][2]; // result matrix
    
    // Initialize result matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Print result
    printf("Resultant Matrix C:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}