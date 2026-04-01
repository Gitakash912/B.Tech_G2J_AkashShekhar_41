#include<stdio.h>

int main() {
    int a[50][50],i,j,r,c,n,count=0;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter a number for find frequancy : ");
    scanf("%d",&n);

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("Enter a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(a[i][j]==n) {
                count++;
            }
        }
    }
    if(count==0) {
        printf("Frequancy of %d is 0",n);
    }
    else {
        printf("Frequancy of %d is %d ",n,count);
    }
    return 0;
    
}