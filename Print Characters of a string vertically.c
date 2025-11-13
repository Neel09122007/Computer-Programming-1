#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\nCharacters in the String vertically:\n");
    for(i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}