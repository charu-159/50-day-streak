//print diagonal of a matrix
#include<stdio.h>
int main(){
    int a[10][10],n,i,j;
    printf("enter size of matrix:");
    scanf("%d",&n);
    printf("enter matrix elemene:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("\n diagonal:\n");
    for(int i=0;i<n;i++){
        printf("%d",a[i][i]);
    }
    return 0;
}