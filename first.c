//find the max and min element in an array

#include<stdio.h>
int main(){
    int arr[6]={1,3,6,8,9,2};
    int max,min;
    max=arr[0];
    min=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<6;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    printf("max is:%d",max);

    printf("min is:%d",min);
    return 0;
}


    
    