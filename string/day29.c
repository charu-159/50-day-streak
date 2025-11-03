//implement strstr() substring search
#include <stdio.h>
#include <string.h>

char* my_strstr(const char *haystack, const char *needle) {
    int i, j;
    int hlen = strlen(haystack);
    int nlen = strlen(needle);

    if (nlen == 0)
        return (char *)haystack; // if needle is empty, return whole string

    for (i = 0; i <= hlen - nlen; i++) {
        for (j = 0; j < nlen; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == nlen)
            return (char *)(haystack + i); // found match
    }
    return NULL; // not found
}

int main() {
    char haystack[100], needle[100];

    printf("Enter main string: ");
    scanf("%s", haystack); // Input without spaces
    printf("Enter substring to search: ");
    scanf("%s", needle);

    char *result = my_strstr(haystack, needle);

    if (result)
        printf("Substring found at position: %ld\n", result - haystack);
    else
        printf("Substring not found\n");

    return 0;
}
