#include <stdio.h>

int main() 
{
    float L, area, perimeter;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &L);
    area = L * L;
    perimeter = 4 * L;
    printf("Area of the square = %.2f\n", area);
    printf("Perimeter of the square = %.2f\n", perimeter);
    return 0;
}
