//count the number of occurrences of an element
#include <stdio.h>

int main() {
    int size, i, num, occr = 0;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &num);

    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            occr++;
        }
    }

    printf("%d occurs %d time(s).\n", num, occr);
    return 0;
}
