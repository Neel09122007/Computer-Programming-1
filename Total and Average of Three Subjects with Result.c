#include <stdio.h>

int main() 
{
    float sub1, sub2, sub3, total, average;
    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3.0;
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Result: FAIL (less than 35 marks in a subject)\n");
    } 
    else 
    {
        if (average >= 70) 
        {
            printf("Result: Distinction\n");
        } 
        else if (average >= 60) 
        {
            printf("Result: First Class\n");
        } 
        else if (average >= 50)
         {
            printf("Result: Second Class\n");
        } 
        else if (average >= 35)
        {
            printf("Result: Third Class\n");
        } 
        else
         {
            printf("Result: FAIL\n");
        }
    }
    return 0;
}