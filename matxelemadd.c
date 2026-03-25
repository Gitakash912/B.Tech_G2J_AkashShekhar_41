#include<stdio.h>

int main() {
    int a[50][50],i,j,sum=0,r,c;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column : ");
    scanf("%d",&c);

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++){
            printf("Enter a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum of the all elements of matrix is = %d",sum);
    return 0;
}