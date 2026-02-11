#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci, a;
    printf("Enter the principle value : ");
    scanf("%f", &p);
    printf("Enter the value of rate : ");
    scanf("%f", &r);
    printf("Enter the value of time : ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    a = p * (pow((1 + r / 100), t));
    ci = a - p;
    printf("Simple interest = %f\n", si);
    printf("compound interst = %f", ci);
    return 0;
}