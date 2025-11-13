#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input1[200], input2[200];
    int A[10][10], B[10][10], C[10][10], M[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    getchar(); 
    printf("Enter elements of first matrix (space-separated):\n");
    fgets(input1, sizeof(input1), stdin);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    getchar();
    printf("Enter elements of second matrix (space-separated):\n");
    fgets(input2, sizeof(input2), stdin);
    char *token = strtok(input1, " ");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            if (token != NULL) {
                A[i][j] = atoi(token);
                token = strtok(NULL, " ");
            }
        }
    }
    token = strtok(input2, " ");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            if (token != NULL) {
                B[i][j] = atoi(token);
                token = strtok(NULL, " ");
            }
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
    return 0;
}