#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    if(x == 'a' || x == 'e'|| x == 'i' || x == 'o' || x == 'u'){
        printf("Vowel");
    }
    else if (x <='9' && x>='0' ){
        printf("Digit");
    }
    else if( x>= 'A' && x <='Z' || x>= 'a' && x <='z'){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}