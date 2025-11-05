//check if two string are anagrams
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0}; // For lowercase English letters only
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths not equal, not anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagram\n");
        return 0;
    }

    // Count each character in str1 (+1) and str2 (-1)
    for (i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    // If all counts are zero, it's an anagram
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

