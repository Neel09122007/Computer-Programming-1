#include <stdio.h>

int main() {
    int amount, i;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for(i = 0; i < 9; i++) {
        if(amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }
    printf("\nMinimum number of notes:\n");
    for(i = 0; i < 9; i++) {
        if(count[i] != 0) {
            printf("%d x %d = %d\n", notes[i], count[i], notes[i] * count[i]);
        }
    }
    return 0;
}