#include<stdio.h>

void swap (int a, int b) {
    int temp; 
    temp=a;
    a=b;
    b=temp;
    printf("In swap function formal para %d %d",a,b);
}

int main() {
    int x,y;
    printf("Enter value of x and y : ");
    scanf("%d %d",&x,&y);
    printf("Before swaping  org value is %d %d\n",x,y);
    swap(x,y);
    return 0;

}