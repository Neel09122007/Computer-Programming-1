#include <stdio.h>
#include <string.h>
int main() {
    char matrix[4][4][10];   
    char arr[16][10];        
    char temp[10];
    int i, j, k = 0;
    printf("Enter 16 elements (as strings):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%s", matrix[i][j]);  
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            strcpy(arr[k++], matrix[i][j]);
        }
    }
    for(i = 0; i < 15; i++) {
        for(j = i + 1; j < 16; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    printf("\nSorted elements in 1D array (string order):\n");
    for(i = 0; i < 16; i++) {
        printf("%s ", arr[i]);
    }
    return 0;
}