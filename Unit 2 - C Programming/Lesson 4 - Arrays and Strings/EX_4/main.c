#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    int arrinserted[num + 1];
    int i,element,loc;
    for(i = 0; i < num; i++)
    {
        printf("Element %d: ", (i+1));
        fflush(stdin);fflush(stdout);
        scanf("%d", &arr[i]);
    }
    printf("Enter element you want to add: ");
    scanf("%d", &element);                      // define element
    printf("Enter the location: ");
    scanf("%d", &loc);                          // define location
    for(i = 0; i < (num + 1); i++)
    {
        if((i + 1) == loc)
        {
            arrinserted[i] = element;           //put the element
            for(i = loc; i < (num + 1); i++)
            {
                arrinserted[i] = arr[i - 1];    //shift the remaining elements
            }
        }
        else
        {
            arrinserted[i] = arr[i];
        }
    }
    for(i = 0; i < (num + 1); i++)
    {
        printf("%d\t", arrinserted[i]);
    }
    return 0;
}
