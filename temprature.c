#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temp in centigrate : ");
    scanf("%f", &c);
    f = ((9 * c) / 5) + 32;
    printf("temp in fahreheiet = %.2f", f);
    return 0;
}