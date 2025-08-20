#include <stdio.h>

int main() {
    float dollars, pounds;
    float dollarToRupee = 48.0;
    float poundToRupee = 72.0;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    float rupees = dollars * dollarToRupee;
    pounds = rupees / poundToRupee;
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);
}
