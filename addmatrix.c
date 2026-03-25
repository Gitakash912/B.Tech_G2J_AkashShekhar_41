#include<stdio.h>

int main() {
    int r1,c1,r2,c2,a[50][50],b[50][50],c[50][50];
    printf("Enter the row and column of 1st matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of 2nd matrix : ");
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2) {
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++) {
                printf("Enter a[%d][%d] ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++) {
                printf("Enter b[%d][%d] ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                c[i][j]=a[i][j]+b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Addition is not possible");
    }
    return 0;
}