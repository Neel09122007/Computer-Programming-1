#include <stdio.h>

int main() 
{
    float R, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &R);
    area = (22.0 / 7.0) * R * R;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
