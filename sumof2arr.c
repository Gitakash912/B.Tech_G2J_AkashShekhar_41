#include<stdio.h>


int main() {
    int n,a[50],b[50],c[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++) {
        printf("Enter a[%d] ",i);
        scanf("%d",&a[i]);
    }
    for(int  i=0; i<n; i++) {
        printf("Enter b[%d] ",i);
        scanf("%d",&b[i]);
    }
    for(int i=0; i<n; i++)
     {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
     }
     return 0;
}