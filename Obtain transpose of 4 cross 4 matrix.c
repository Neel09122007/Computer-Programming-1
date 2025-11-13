#include <stdio.h>
int main() {
    int A[4][4], Transpose[4][4];
    int i, j;
    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            Transpose[j][i] = A[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", Transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}