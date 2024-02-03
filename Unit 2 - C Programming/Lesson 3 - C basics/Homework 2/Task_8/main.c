#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float x, y, Res;
    printf("Enter operator either + or - or * or divide : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &op);
    printf("Enter the two operands: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &x, &y);
    switch (op)
    {
    case '+':
        Res = x + y;
        break;
    case '-':
        Res = x - y;
        break;
    case '*':
        Res = x * y;
        break;
    case '/':
        Res = x / y;
        break;
    default:
        printf("You entered the wrong operator.");
        break;
    }
    printf("Result = %f", Res);
    return 0;
}
