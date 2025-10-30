//find intersection of two sortedarray
#include<stdio.h>
int main(){
     int arr[7]={1,2,3,5,6,5,8};
     int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int windowsum=0;
    for(int i=0;i<k;i++){
      windowsum=windowsum+arr[i];
    }
    int maxsum;
    maxsum=windowsum;

    for(int j=k; j<n;j++)
    {
     windowsum=windowsum+arr[j]-arr[j-k];
     if(windowsum>maxsum)
     maxsum=windowsum;
    }
       printf("%d", maxsum);
       return 0;
}

    