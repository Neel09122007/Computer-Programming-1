#include <stdio.h>
 int main() {
    int num, rev = 0, digit,temp;
    printf("Enter a number:");
    scanf("%d", &num);
    temp = num;
    if (temp < 0){
        temp = -temp;
    }
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp /10;
    }
    if(num < 0) {
        rev = -rev;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
 }