#include <stdio.h>
int main(){
    int num, sum=0;
    for (num=1; num<=100; num++){
        if(num % 3 ==0) {
            sum = sum + num;
        }
    }
    printf("Sum of integers from 1 to 100 divisible by 3 = %d\n", sum);
    return 0;
}