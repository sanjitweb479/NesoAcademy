#include<stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Factorial of the number %d is %d", n, fact(n));
    return 0;
}