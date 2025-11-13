#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int *A[r1], *B[r2], *C[r1], *M[r1];

    for (i = 0; i < r1; i++)
        A[i] = (int *)malloc(c1 * sizeof(int));
    for (i = 0; i < r2; i++)
        B[i] = (int *)malloc(c2 * sizeof(int));
    for (i = 0; i < r1; i++) {
        C[i] = (int *)malloc(c1 * sizeof(int));
        M[i] = (int *)malloc(c2 * sizeof(int));
    }
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Addition:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition not possible (different dimensions)\n");
    }
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Subtraction:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                C[i][j] = A[i][j] - B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nSubtraction not possible (different dimensions)\n");
    }
    if (c1 == r2) {
        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                M[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    M[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", M[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (columns of A != rows of B)\n");
    }
    for (i = 0; i < r1; i++) {
        free(A[i]);
        free(C[i]);
        free(M[i]);
    }
    for (i = 0; i < r2; i++) {
        free(B[i]);
    }
    return 0;
}