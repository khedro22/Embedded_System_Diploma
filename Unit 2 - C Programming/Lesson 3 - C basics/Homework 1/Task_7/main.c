#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    float n = 0;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    if(a < b)
    {
        n = a - b;
        b = b + n;
        a = a - n;
    }
    else
    {
        n = b - a;
        a = a + n;
        b = b - n;
    }
    printf("After swapping, value of a = %f\nAfter swapping, value of b = %f", a, b);


    return 0;
}
