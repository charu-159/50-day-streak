#include <stdio.h>

int maxProduct(int* nums, int numsSize) {
    int maxProduct = nums[0];

    // Try every subarray
    for (int i = 0; i < numsSize; i++) {
        int product = 1;
        for (int j = i; j < numsSize; j++) {
            product *= nums[j];
            if (product > maxProduct)
                maxProduct = product;
        }
    }
    return maxProduct;
}

int main() {
    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Maximum product subarray: %d\n", maxProduct(nums, n));
    return 0;
}
