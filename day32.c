//longest substring without repeating character
#include <stdio.h>
#include <string.h>

// Function to check if all characters in substring str[l...r] are unique
int all_unique(char str[], int l, int r) {
    int freq[256] = {0};
    for (int i = l; i <= r; i++) {
        if (freq[(unsigned char)str[i]] > 0)
            return 0;
        freq[(unsigned char)str[i]]++;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (all_unique(str, i, j)) {
                int curr_len = j - i + 1;
                if (curr_len > max_len)
                    max_len = curr_len;
            }
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", max_len);
    return 0;
}
