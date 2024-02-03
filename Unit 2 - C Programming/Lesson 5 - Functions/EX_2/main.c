#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));

    return 0;
}
int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}
