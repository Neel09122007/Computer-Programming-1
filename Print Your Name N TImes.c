#include <stdio.h>

int main()
{
int i,t;
char a[50];
printf("Enter your Name:");
scanf("%s",a);
printf("How many times do you want to print your name?: ");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    printf("HELLO %s \n",a);

}
}