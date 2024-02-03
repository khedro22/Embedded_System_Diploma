#include <stdio.h>
#include <stdlib.h>
int power(int n, int p);
int main()
{
    int n, p;
    printf("Enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);
    printf("Enter power number(positive number): ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &p);
    printf("%d^%d = %d", n, p, power(n, p));
    return 0;
}
int power(int n, int p)
{
    if(n == 1)
        return 1;
    else
    {
        if(p != 1)
            return (n * power(n, p-1));
    }
}
