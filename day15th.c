//missing no.in array[1 -n]
#include<stdio.h>
int main() {
    int arr[6] = {1,2,3,4,6,7};
    int n = 7; // The numbers should be from 1 to 7
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < 6; i++) {
        sum += arr[i];
    }
    int missing = total - sum;
    printf("The missing number is: %d\n", missing);
    return 0;
}

