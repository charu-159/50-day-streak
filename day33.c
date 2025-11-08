//group anargram together
#include <stdio.h>
#include <string.h>

void sort(char *str) {
    for (int i = 0; str[i]; i++) {
        for (int j = i + 1; str[j]; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char words[][20] = {"bat", "tab", "tap", "pat", "cat", "act"};
    int n = sizeof(words) / sizeof(words[0]);
    int used[100] = {0};

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        char sorted1[20];
        strcpy(sorted1, words[i]);
        sort(sorted1);

        printf("Group: %s ", words[i]);
        used[i] = 1;

        for (int j = i + 1; j < n; j++) {
            char sorted2[20];
            strcpy(sorted2, words[j]);
            sort(sorted2);

            if (strcmp(sorted1, sorted2) == 0) {
                printf("%s ", words[j]);
                used[j] = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
