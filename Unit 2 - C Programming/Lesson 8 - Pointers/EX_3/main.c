#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentence[100];
    char *ptr_sen;
    int i;
    char *temp;
    printf("Enter a sentence: ");
    gets(sentence);
    ptr_sen = sentence;
    for(i = 0; i < strlen(sentence)/2; i++)
    {
        *temp = *(ptr_sen + i);
        *(ptr_sen + i) = *(ptr_sen + strlen(sentence) - i - 1);
        *(ptr_sen + strlen(sentence) - i - 1) = *temp;
    }
    printf("%s", sentence);

    return 0;
}
