#include <stdio.h>

int main()
{
    float r, c, a, pi = 3.14;
    printf("Enter radius : ");
    scanf("%f", &r);
    a = pi * r * r;
    c = 2 * pi * r;
    printf("Area of circle = %f\n", a);
    printf("Circumfarance of circle = %f", c);
    return 0;
}