#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j, k, len, last_space;
    char names[10][100];
    printf("Enter number of individuals: ");
    scanf("%d", &n);
    getchar(); 
    printf("\nEnter full names of %d individuals:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }
    printf("\nAbbreviated Names:\n");
    for (i = 0; i < n; i++) {
        len = strlen(names[i]);
        last_space = -1;
        for (j = len - 1; j >= 0; j--) {
            if (names[i][j] == ' ') {
                last_space = j;
                break;
            }
        }
        printf("%d. ", i + 1);
        printf("%c.", names[i][0]);
        for (j = 0; j < len; j++) {
            if (names[i][j] == ' ' && j != last_space) {
                printf(" %c.", names[i][j + 1]);
            }
        }
        if (last_space != -1) {
            printf(" %s\n", &names[i][last_space + 1]);
        } else {
            printf(" %s\n", names[i]); 
        }
    }
    return 0;
}