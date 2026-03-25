#include<stdio.h>

int main() {
    int a[50][50],r,c,i,j;
    printf("Enter number of row :  ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++) {
            printf("Enter a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}