#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for(i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    printf("\nOriginal String: %s", str);
    printf("\nReversed String: %s\n", rev);
    return 0;
}