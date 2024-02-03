#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    char c;
    int i, Num = 0;

    printf("Enter a string: ");
    gets(input);
    printf("Enter a character to find frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c", &c);
    for(i = 0; (i < 100) && (input[i] != 0); i++)
    {
        if(c == input[i])
            Num++;
    }
    printf("Frequency of %c = %d", c, Num);

    return 0;
}
