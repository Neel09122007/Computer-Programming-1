#include <stdio.h>

int main() 
{
    float a, b;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &a);
    b = (a - 32) * 5.0 / 9.0;
    printf("Temperature in Celsius: %.2f °C\n", b);
    return 0;
}
