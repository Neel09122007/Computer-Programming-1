#include <stdio.h>

int main() {
    float rupees, dollars;
    float rate = 48.0; 
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / rate;
    printf("%.2f rupees = %.2f dollars\n", rupees, dollars);
}
