// Move all negative numbers to beginning and positive to the end
#include<stdio.h>
int main()
{
    int arr[9]={2,-9,-4,5,-3,6,7,-5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result[size];
    int index =0;
   // Step 1: Copy all negative numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            result[index++] = arr[i];
        }
    }

    // Step 2: Copy all positive numbers (including zero)
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            result[index++] = arr[i];
        }
    }

    // Step 3: Print the result
    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}



