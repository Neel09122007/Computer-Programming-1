#include <stdio.h>

int main() 
{
    float dollars, rupees;
    float rate = 48.0;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * rate;
    printf("%.2f dollars = %.2f rupees\n", dollars, rupees);
}
