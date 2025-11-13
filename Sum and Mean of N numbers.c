#include <stdio.h>
int main(){
    int n,i;
    float value, sum = 0.0, mean;
    printf("Enter the numbers of values:");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}