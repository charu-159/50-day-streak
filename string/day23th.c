//remove duplicate from a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0, found;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (i = 0; i < n; i++) {
        found = 0;
        // Check if str[i] already exists in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k] = str[i];
            k++;
        }
    }
    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);
    return 0;
}
