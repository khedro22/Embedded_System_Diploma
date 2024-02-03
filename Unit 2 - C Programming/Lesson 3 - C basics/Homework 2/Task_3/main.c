#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, Largest;
    printf("Enter 3 numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f %f", &x, &y, &z);
    if(x > y)
    {
        if(x > z)
            Largest = x;
        else
            Largest = z;
    }
    else //y is larger than x
    {
        if(y > z)
            Largest = y;
        else
            Largest = z;
    }
    printf("Largest is %f", Largest);
    return 0;
}
