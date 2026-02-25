#include<stdio.h>

int main() {
    int n,i,fact=1;
    printf("Enter n : ");
    scanf("%d",&n);

    i=1;
    while(i<=n) {
        fact=fact*i;
        i++;
    }
    printf("Factorial of n = %d ",fact);
    return 0;
}