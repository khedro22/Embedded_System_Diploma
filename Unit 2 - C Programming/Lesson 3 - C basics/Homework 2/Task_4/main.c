#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    if(x > 0)
        printf("Number %f is positive.", x);
    else if(x < 0)
        printf("Number %f is negative.", x);
    else
        printf("Number %.1f is zero.");
    return 0;
}
