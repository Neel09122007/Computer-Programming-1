#include <stdio.h>
#include <string.h>
int main() {
    char books[3][50];        
    char *ptr[3];             
    printf("Enter names of 3 books:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        fgets(books[i], sizeof(books[i]), stdin);
        books[i][strcspn(books[i], "\n")] = '\0';  
        ptr[i] = books[i];     
    }
    printf("\nList of Books Entered:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, ptr[i]);
    }
    return 0;
}