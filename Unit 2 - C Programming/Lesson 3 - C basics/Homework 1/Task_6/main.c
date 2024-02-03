#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %.2f\nAfter swapping, value of b = %.2f", a, b);



    return 0;
}
