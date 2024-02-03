#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, fact = 1;
    int i;
    printf("Enter a positive number: ");
    scanf("%i", &x);
    if(x > 0)
    {
        for(i = 1; i <= x; i++)
        {
            fact *= i;
        }
        printf("Factorial = %i", fact);
    }
    else if(x == 0)
    {
        fact = 1;
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn\'t exist.");
    }

    return 0;
}
