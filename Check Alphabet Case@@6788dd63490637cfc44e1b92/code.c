#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase", ch);
    } 
    else {
        printf("Not an alphabet", ch);
    }

    return 0;
}