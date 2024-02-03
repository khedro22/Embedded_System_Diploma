#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Value;
    printf("Please enter the number you want to check: ");
    scanf("%i", &Value);
    if(Value % 2 == 0)
    {
        printf("The Number %i is even", Value);
    }
    else
    {
        printf("The Number %i is odd", Value);
    }
    return 0;
}
