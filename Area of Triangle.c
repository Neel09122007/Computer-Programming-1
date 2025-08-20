#include <stdio.h>

int main()
 {
    float H, L, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &H);
    printf("Enter the base length of the triangle: ");
    scanf("%f", &L);
    area = (H * L) / 2;
    printf("Area of the triangle = %.2f\n", area);
    return 0;
}
