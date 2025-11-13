#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (r1 != r2 || c1 != c2)
        printf("\nAddition and Subtraction not possible (different dimensions)\n");
    if (c1 != r2)
        printf("Multiplication not possible (columns of A != rows of B)\n");
    int *A = (int *)malloc(r1 * c1 * sizeof(int));
    int *B = (int *)malloc(r2 * c2 * sizeof(int));
    int *C = (int *)malloc(r1 * c1 * sizeof(int));
    int *M = (int *)malloc(r1 * c2 * sizeof(int));
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", (A + i * c1 + j));
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", (B + i * c2 + j));
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                *(C + i * c1 + j) = *(A + i * c1 + j) + *(B + i * c1 + j);

        printf("\nMatrix Addition:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf("%d ", *(C + i * c1 + j));
            printf("\n");
        }
    }
    if (r1 == r2 && c1 == c2) {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                *(C + i * c1 + j) = *(A + i * c1 + j) - *(B + i * c1 + j);

        printf("\nMatrix Subtraction:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf("%d ", *(C + i * c1 + j));
            printf("\n");
        }
    }
    if (c1 == r2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                *(M + i * c2 + j) = 0;
                for (k = 0; k < c1; k++)
                    *(M + i * c2 + j) += (*(A + i * c1 + k)) * (*(B + k * c2 + j));
            }
        }
        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++)
                printf("%d ", *(M + i * c2 + j));
            printf("\n");
        }
    }
    free(A);
    free(B);
    free(C);
    free(M);
    return 0;
}