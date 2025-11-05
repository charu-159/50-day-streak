//count and say problem
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter term number: ");
    scanf("%d", &n);

    // Start with first term
    char term[1000] = "1";
    char next[1000];

    for (int k = 1; k < n; k++) {
        int i = 0, j = 0;
        while (term[i]) {
            int count = 1;
            // Count repeated digits
            while (term[i] == term[i+1]) {
                count++;
                i++;
            }
            next[j++] = count + '0'; // Write count as char
            next[j++] = term[i];     // Write the digit
            i++;
        }
        next[j] = '\0';
        strcpy(term, next); // move to next term
    }

    printf("Count and Say term %d: %s\n", n, term);
    return 0;
}
