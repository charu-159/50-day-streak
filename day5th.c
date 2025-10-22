//find union and intersection of two array
#include<stdio.h>
int main(){
    int arr1[6]={1,5,2,4,6,7};
    int arr2[6]={3,8,9,1,4,0};
    int n1=6,n2=6;
    printf("intersection:");;
for(int i=0;i<n1;i++){
  for(int j=0;j<n2;j++){
    if(arr1[i]==arr2[j]){
    printf("%d",arr1[i]);
    break;
  }
}
}
printf("\nunion :");
for(int i=0;i<n1;i++){
    printf("%d,arr1[i]");
}
for(int i=0;i<n1;i++){
    int found = 0;
        for (int j = 0; j < 4; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            printf("%d ", arr2[i]);
    }

    return 0;
}

