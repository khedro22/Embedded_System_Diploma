#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is a not an alphabet.", c);
    return 0;
}
