#include<stdio.h>

int main() {
    int n,r,rev=0,n1; // r is remainder nad rev is reverse
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;

    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse is= %d\n",rev);
    if(rev==n1) {
        printf("And %d is pallindrome",rev);
    }
    else{
        printf("And %d is not a pallindrome",rev);
    }
    return 0;
}