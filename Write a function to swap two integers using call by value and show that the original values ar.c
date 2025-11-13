#include <stdio.h>
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside function (after swapping): a = %d, b = %d\n", x, y);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before calling swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After calling swap: a = %d, b = %d\n", a, b);
    return 0;
}