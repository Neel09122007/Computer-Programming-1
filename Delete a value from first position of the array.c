#include <stdio.h>
int main() {
    int arr[20], n, i;
    printf("Enter number of Elements:");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for( i = 0; i < n-1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deleting first element:\n");
    for ( i = 0; i < n; i++ ) {
        printf("%d", arr[i]);
    }
    return 0;
}