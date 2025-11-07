//check if string is a rotation of another string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return 0;

    // Create a new string: s1 + s1
    char *temp = (char *)malloc(2 * len1 + 1);
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    int result = strstr(temp, s2) != NULL;

    free(temp);
    return result;
}

int main() {
    char s1[] = "abcde";
    char s2[] = "deabc";

    if (isRotation(s1, s2))
        printf("Yes, it's a rotation.\n");
    else
        printf("No, it's not a rotation.\n");

    return 0;
}