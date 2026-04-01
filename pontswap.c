#include<stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("In swap function formal parm is %d %d\n",*a,*b);
}

int main() {
    int x,y;
    printf("Enter value of x and y : ");
    scanf("%d%d",&x,&y);
    printf("Before swaping orginal value is %d %d\n",x,y);
    swap(&x,&y);
    printf("After swaping orginal value is %d %d\n",x,y);
    return 0;
}