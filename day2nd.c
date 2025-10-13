//reverse in array place
#include<stdio.h>
int main()
{
    int arr[9]={2,3,4,5,3,6,7,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<size/2;i++){
        arr[i]=temp;
        arr[i]=arr[size-1-i];
        temp=arr[size-1-i];
 }
 for(int i=0;i<size;i++){
  printf("%d",arr[i]);
 }
 return 0;
}