#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, Res;
    printf("Enter two numbers : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &x, &y);
    Res = x * y;
    printf("Product : %f", Res);
    return 0;
}
