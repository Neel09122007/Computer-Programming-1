#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    result = strcmp(str1, str2);
    if (result == 0) {
        printf("\nBoth strings are the same.\n");
     } else if (result < 0) {
            printf("\n '%s' is smaller than '%s'.\n", str1, str2);
        } else {
            printf("\n '%s' is greater than '%s'.\n", str1, str2);
        }
    return 0;
    }