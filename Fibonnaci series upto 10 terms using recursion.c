#include <stdio.h>
int fibonnaci(int n) {
    if(n == 0 || n == 1) {
        return n;
    } else {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
    }
int main() {
    int n;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    printf("Fibonnaci series up to %d terms : \n", n);
    for(int i = 0; i < n; i++) {
        printf("%d,", fibonnaci(i));
    }
    printf("\n");
    return 0;
}