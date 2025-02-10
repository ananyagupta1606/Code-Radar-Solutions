#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } 
    else {
        printf("Not an alphabet\n", ch);
    }

    return 0;
}