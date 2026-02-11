#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a=");
    scanf("%d", &a);
    printf("Enter b=");
    scanf("%d", &b);
    printf("Enter c=");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a=%d is greatest", a);
        }
        else
        {
            printf("c=%d is greatest", c);
        }
    }
    else if (b > c)
    {
        printf("b=%d is greatest", b);
    }
    else
    {
        printf("c=%d is greates", c);
    }

    return 0;
}