#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nat, Sum = 0;
    int i = 0;
    printf("Please enter a number: ");
    scanf("%i", &Nat);
    if(Nat >= 0)
    {
        for(i = 0; i <= Nat; i++)
        {
            Sum = Sum + i;
        }
        printf("The sum is %i", Sum);
    }
    else
        printf("You entered a negative number.");
    return 0;
}
