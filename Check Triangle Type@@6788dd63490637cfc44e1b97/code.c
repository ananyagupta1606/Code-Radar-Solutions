#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if( a == b && b == c && c == a){
        printf("Equilateral");
    }else if( b == a && b!= c || a == c && a!=b){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }

    return 0;
}