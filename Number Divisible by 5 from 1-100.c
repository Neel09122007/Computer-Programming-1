#include <stdio.h>

int main() {
    int num;

    printf("Numbers from 1 to 100 divisible by 5 are: \n");
    for(num = 1; num<=100; num++){
        if (num % 5 == 0) {
            printf("%d", num);
        
        }
    }
    return 0;
}