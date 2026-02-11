#include<stdio.h>

int main(){
    int physics,chemistry,math,hindi,english;
    float sum,per;
    printf("Enter physics marks : ");
    scanf("%d",&physics);
    printf("Enter chemistry marks : ");
    scanf("%d",&chemistry);
    printf("Enter math marks : ");
    scanf("%d",&math);
    printf("Enter hindi marks : ");
    scanf("%d",&hindi);
    printf("Enter english marks : ");
    scanf("%d",&english);
    
    sum=physics+chemistry+math+hindi+english;
    per=sum/5;
    
    if(per>=90 && per<=100) {
        printf("GRADE A");
    }
    else if(per>=80 && per<90) {
        printf("GRADE B");
    }
    else if(per>=70 && per<80) {
        printf("GRADE C");
    }
    else {
        printf("GRADE D");
    }
    return 0;
}