#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[100];
    int i;
    char input_reverse[100];
    printf("Enter a string: ");
    gets(input);
    for(i = 0; i < strlen(input); i++)
    {
        input_reverse[i] = input[strlen(input) - i - 1];
    }
    printf("Reverse string is: %s", input_reverse);
    return 0;
}
