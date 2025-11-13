#include <stdio.h>
int main() {
    int num, digit, rev = 0,temp;
    printf("Enter a number: ",num);
    scanf("%d",&num);
    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        rev = rev *10 +digit;
        temp = temp/10;
    }
    printf("Digits of %d are:", num);
    while(rev > 0) {
        digit = rev % 10;
        printf("%d", digit);
        rev = rev / 10;
    }
    return 0;
}