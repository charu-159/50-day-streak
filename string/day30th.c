//valid palindrome after removing at most one character
#include <stdio.h>
#include <string.h>

// Helper: check if s[l...r] is a palindrome
int is_palindrome(char s[], int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    char s[105];
    printf("Enter a string: ");
    scanf("%s", s);

    int l = 0, r = strlen(s) - 1;
    int valid = 1;

    while (l < r) {
        if (s[l] != s[r]) {
            // Check after skipping left or right character
            valid = is_palindrome(s, l + 1, r) || is_palindrome(s, l, r - 1);
            break;
        }
        l++; r--;
    }

    if (valid)
        printf("Yes, can become palindrome by removing at most one character.\n");
    else
        printf("No, cannot become palindrome.\n");
    return 0;
}
