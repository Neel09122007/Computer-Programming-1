#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the two Numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }
}