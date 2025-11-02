//longest common prefix
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char prefix[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[i] && str2[i] && str1[i] == str2[i]) {
        prefix[i] = str1[i];
        i++;
    }
    prefix[i] = '\0';

    if (i == 0)
        printf("No common prefix\n");
    else
        printf("Longest common prefix: %s\n", prefix);

    return 0;
}
