#include <stdio.h>
int main() {
    int arr[5], rev[5], i;
    printf("Enter 5 elements of array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++) {
        rev[i] = arr[4 - i];
    }
    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", rev[i]);
    }
    return 0;
}