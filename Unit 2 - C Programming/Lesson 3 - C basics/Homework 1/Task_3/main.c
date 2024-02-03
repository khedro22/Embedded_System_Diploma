#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, sum;
    printf("Enter two integers : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%i %i", &x, &y);
    sum = x + y;
    printf("Sum : %i", sum);

    return 0;
}
