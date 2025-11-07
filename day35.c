//check if one string is a subsequence of another
#include <stdio.h>
#include <string.h>

// Returns 1 if str1 is a subsequence of str2, else 0
int is_subsequence(char str1[], char str2[]) {
    int i = 0, j = 0;
    int m = strlen(str1), n = strlen(str2);

    while (i < m && j < n) {
        if (str1[i] == str2[j]) {
            i++;
        }
        j++;
    }
    return (i == m);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string (to check as subsequence): ");
    scanf("%s", str1);
    printf("Enter second string (main string): ");
    scanf("%s", str2);

    if (is_subsequence(str1, str2))
        printf("Yes, '%s' is a subsequence of '%s'.\n", str1, str2);
    else
        printf("No, '%s' is not a subsequence of '%s'.\n", str1, str2);

    return 0;
}

