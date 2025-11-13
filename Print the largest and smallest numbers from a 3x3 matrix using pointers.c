#include <stdio.h>
int main() {
    int matrix[3][3];
    int *ptr = &matrix[0][0];   
    int i, j;
    int max, min;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", (ptr + i * 3 + j));   
        }
    }
    max = min = *ptr;
    for(i = 0; i < 9; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);
        if(*(ptr + i) < min)
            min = *(ptr + i);
    }
    printf("\nLargest element = %d\n", max);
    printf("Smallest element = %d\n", min);
    return 0;
}