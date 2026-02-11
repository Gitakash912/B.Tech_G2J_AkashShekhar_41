#include <stdio.h>

int main()
{
    float p, r, t, si;
    printf("Enter the principle value : ");
    scanf("%f", &p);
    printf("Enter the value of rate : ");
    scanf("%f", &r);
    printf("Enter the value of time : ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple interest = %f", si);
    return 0;
}