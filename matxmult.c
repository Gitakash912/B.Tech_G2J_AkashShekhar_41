#include<stdio.h>

int main() {
    int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2;
    printf("Enter thr row nad column of 1st matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of 2nd matrix : ");
    scanf("%d%d",&r2,&c2);

    if(c1==r2) {
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c1; j++) {
                printf("Enter a[%d][%d] ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++){
                printf("Enter b[%d][%d] ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++){
                c[i][j]=0;
                for(int k=0; k<c1; k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    printf("%d",c[i][j]);
                }
            }
        }
        printf("Multiplication of matrix\n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiplication is not possible ");
    }
    return 0;
}