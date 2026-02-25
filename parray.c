#include<stdio.h>

int main() {
    int a[50],i,n;
    printf("Eneter number of element : ");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}