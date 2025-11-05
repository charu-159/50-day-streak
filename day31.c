//compress a string
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], compressed[200];
    printf("Enter a string: ");
    scanf("%s", s);

    int i = 0, j = 0;
    int n = strlen(s);

    while (i < n) {
        char ch = s[i];
        int count = 1;
        // Count repeats
        while (i + 1 < n && s[i] == s[i+1]) {
            count++;
            i++;
        }
        compressed[j++] = ch;
        // Write count as digit(s)
        int len = sprintf(compressed + j, "%d", count);
        j += len;
        i++;
    }
    compressed[j] = '\0';

    printf("Compressed string: %s\n", compressed);
    return 0;
}
