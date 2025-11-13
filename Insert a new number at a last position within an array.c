#include <stdio.h>
int main() {
    int arr[20]; 
    int n, num, i;
    printf("Enter number of elements in array (max 19): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to insert at last position: ");
    scanf("%d", &num);
    arr[n] = num;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}