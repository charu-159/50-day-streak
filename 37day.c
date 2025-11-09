//rotate matrix by 90 degree clockwise
#include<stdio.h>
int main(){
    int rows ,cols;
    printf("enter the rows and columns of a matrix:");
    scanf("%d %d",&rows,&cols);
    printf("enter the element of  amatrix:");
    int matrix[10][10];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //transpose
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Step 2: Reverse each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][rows- 1 - j];
            matrix[i][rows - 1 - j] = temp;
        }
    }
    // Print rotated matrix
    printf("Rotated Matrix (90° Clockwise):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}





