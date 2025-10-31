//merge two sorted array without using extra space

#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr1[], int n, int arr2[], int m) {
    int gap = ceil((float)(n + m) / 2);

    while (gap > 0) {
        int i = 0, j = gap;

        while (j < (n + m)) {
            int a, b;

            if (i < n)
                a = arr1[i];
            else
                a = arr2[i - n];

            if (j < n)
                b = arr1[j];
            else
                b = arr2[j - n];

            if (a > b) {
                if (i < n && j < n)
                    swap(&arr1[i], &arr1[j]);
                else if (i < n && j >= n)
                    swap(&arr1[i], &arr2[j - n]);
                else
                    swap(&arr2[i - n], &arr2[j - n]);
            }

            i++;
            j++;
        }

        gap = (gap == 1) ? 0 : ceil((float)gap / 2);
    }
}