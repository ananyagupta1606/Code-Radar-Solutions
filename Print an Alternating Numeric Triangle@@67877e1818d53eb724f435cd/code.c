#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int value = 1;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",value);
            value = 1 - value;
        }  
    printf("\n");
    }

    return 0;
}