#include<stdio.h>

int main() {
    int n,count;
    printf("Enter a number : ");
    scanf("%d",&n);

    count=0;
    while(n>0) {
        n=n/10;
        count++;
    }
    printf("Number of digit is : %d",count);
    return 0;
}