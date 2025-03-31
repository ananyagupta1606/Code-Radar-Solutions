#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            int count = 1;
            printf("%d ", count);
            count++;
        }  
    printf("\n");
    }
    return 0;
}