#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabit[27];
    char *ptr_alpha;
    char i;
    ptr_alpha = alphabit;
    for(i = 0; i < 26; i++)
    {
        *ptr_alpha = 'A' + i;
        printf("%c\n", *ptr_alpha);
    }

    return 0;
}
