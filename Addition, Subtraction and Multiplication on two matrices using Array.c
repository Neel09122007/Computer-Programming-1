#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10], M[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d ", &r1, &c1);
        
        printf("Enter rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);
        printf("\nEnter elements of first matrix:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }  
        }
        printf("\nEnter elements of second matrix:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }  
        }
        if (r1 == r2 && c1 == c2) {
            printf("\nMatrix Addition:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c1; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("\nMatrix addition not possible.\n");
        }
        if (r1 == r2 && c1 == c2) {
            printf("\nMatrix Subtraction:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c1; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("\nMatrix subtraction not possible.\n");
        }
        if (c1 == r2) {
            printf("\nMatrix Multiplication:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c2; j++) {
                    M[i][j] = 0;
                    for(k = 0; k < c1; k++) {
                        M[i][j] += A[i][k] * B[k][j];
                    }
                    printf("%d ", M[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("\nMatrix multiplication not possible.\n");
        }
        return 0;
    }