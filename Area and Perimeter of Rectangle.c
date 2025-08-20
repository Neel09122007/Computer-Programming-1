#include <stdio.h>

int main() 
{
    float L, B, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &L);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &B);
    area = L * B;
    perimeter = 2 * (L + B);
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);
    return 0;
}
