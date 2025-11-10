//search in a row wise and column wise sorted matrix
#include<stdio.h>
int main(){
    int row,cols,x;
    printf("enter the no.of row and column");
    scanf("%d %d",&row,&cols);
    int mat[100][100];
    printf("enter the element of row and cols");
    for(int i=0;i<row;i++){
        for (int j = 0; j <cols; j++){
            scanf("%d", &mat[i][j]);
 }
}
printf("Enter the number to search: ");
    scanf("%d", &x);
    int i=0,j=cols-1;
    int found=0;
    while(i<row&&j>=0)
    if (mat[i][j] == x) {
            printf("Found %d at position (%d,%d)\n", x, i, j);
            found = 1;
            break;
    }
    else if(mat[i][j]<x){
       j--;
    }
    else{
        i++;
    }
    if (!found)
        printf("%d not found in the matrix.\n", x);

    return 0;
}

    






