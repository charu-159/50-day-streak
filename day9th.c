//kadane's algorithm-maximum subarray sum
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
     int st,end;
     for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                printf("%d",arr[i]);
            }
            printf(" ");
        }
        printf("\n");
     }
     return 0;

    
}
