#include <stdio.h>
int main()
 {
    float grams, kilograms;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    kilograms = grams / 1000.0;
    printf("Weight in kilograms: %.3f kg\n", kilograms);
    return 0;
}
