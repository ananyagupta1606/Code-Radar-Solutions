#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--){
        for(int j = 1; j <= (N-i); j++){
            printf(" ");
        }
        for (int j = n; j >= i; j--){
            printf("* ");
        }  
    printf("\n");
    }
    return 0;
}