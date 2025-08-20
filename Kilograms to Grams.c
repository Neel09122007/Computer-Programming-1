#include <stdio.h>

int main() 
{
    float kilograms, grams;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);
    grams = kilograms * 1000.0;
    printf("Weight in grams: %.2f g\n", grams);
    return 0;
}
