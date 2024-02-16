#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &n);
    int arr[n];
    int *P_arr;
    P_arr = arr; // points to the first element of array
    printf("Input %d number of elements in the array :\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Element - %d: ", i+1);
        fflush(stdout);fflush(stdin);
        scanf("%d", P_arr + i);
    }
    printf("The elements of array in reverse order are :\n");
    for(i = 0; i < n; i++)
    {
        printf("Element - %d: %d\n", i+1, *(P_arr + n - i - 1));
    }
    return 0;
}
