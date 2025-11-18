//snake pattern printing
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int num = 1; // starting number

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // Left to Right
            for (int j = 0; j < cols; j++) {
                printf("%d\t", num++);
            }
        } else {
            // Right to Left
            int temp = num + cols - 1;
            for (int j = 0; j < cols; j++) {
                printf("%d\t", temp--);
            }
            num += cols;
        }
        printf("\n");
    }

    return 0;
}