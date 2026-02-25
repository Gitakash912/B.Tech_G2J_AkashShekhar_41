#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter sides of triangle : \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c) {
        printf("Equilateral Triangle");
    }
    else if(a==b && b!=c) {
        printf("Isoceles Triangle");
    }
    else {
        printf("Scalen Triangle");
    }
    return 0;
}