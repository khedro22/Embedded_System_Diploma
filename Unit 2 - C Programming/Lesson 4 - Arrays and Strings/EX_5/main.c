#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int Num, i, index;
    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &Num);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == Num)
        {
            printf("Number found in location %d", i + 1);
            break;
        }
    }
    if(i == n)
    {
        printf("Not found");
    }
    return 0;
}
