#include <stdio.h>
int main() {
    int arr[5], i, j, temp;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5-1; i++) {
        for(j = 0; j < 5-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nArray in Ascending Order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nArray in Descending Order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}