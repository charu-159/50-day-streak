//convert string to integer//like atoi
#include <stdio.h>
#include <stdlib.h> // for atoi

int main() {
    char str[100];
    int num;

    printf("Enter a number as a string: ");
    scanf("%s", str);

    num = atoi(str);

    printf("Integer value: %d\n", num);

    return 0;
}
