#include <stdio.h>
int main() {
    int arr[10];   
    int i;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe 4th value is: %d\n", arr[3]); 
    printf("The 7th value is: %d\n", arr[6]);    
    printf("The 9th value is: %d\n", arr[8]);    
    return 0;
}