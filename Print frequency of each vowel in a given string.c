#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int a = 0, e = 0, i_count = 0, o = 0, u = 0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for( i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch == 'a') {
            a++;
        } else if(ch == 'e') {
            e++;                        
        }
        else if(ch == 'i') {
            i_count++;                        
        }
        else if(ch == 'o') {
            o++;                        
        }
        else if(ch == 'u') {
            u++;                        
        }
    }
    printf("\nFrequency of vowels in the string:\n");
    printf("A/a : %d\n", a);
    printf("E/e : %d\n", e);
    printf("I/i : %d\n", i_count);
    printf("O/o : %d\n", o);    
    printf("U/u : %d\n", u);
    return 0;
}