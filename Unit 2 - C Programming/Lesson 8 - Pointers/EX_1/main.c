#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 29;
    int *ab;
    printf("Here is the declaration as ab is a int pointer and m is int value = 29\n");
    printf("------------------------------------------------------------------------\n");
    printf("Address of m: %p \nValue of m: %d\n",&m, m);
    ab = &m;
    printf("------------------------------------------------------------------------\n");
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab: %p \nContent of pointer ab: %d\n", ab, *ab);
    m = 34;
    printf("------------------------------------------------------------------------\n");
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab: %p \nContet of pointer ab: %d\n", ab, *ab);
    *ab = 7;
    printf("------------------------------------------------------------------------\n");
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m: %p \nValue of m: %d", &m, m);
    return 0;
}
