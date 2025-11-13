#include <stdio.h>
int main() {
    int arr[20], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n == 0) {
        printf("Array is already empty!\n");
    } else {
        n--;
    }
    printf("Array after deleting last element:\n");
    for (i = 0; i < n; i++){
        printf("%d ,", arr[i]);
    }
    printf("\n");
    return 0;
}