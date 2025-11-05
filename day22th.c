//check for palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1; // Assume true

    printf("Enter a string: ");
    scanf("%s", str); // Use %s for single word, fgets for whole line

    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
