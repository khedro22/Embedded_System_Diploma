#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    int i, Count = 0;
    printf("Enter a string: ");
    gets(input);
    for(i = 0; (i < 100) && (input[i] != 0); i++)
    {
                Count++;
    }
    printf("Length of String = %d", Count);
    return 0;
}
