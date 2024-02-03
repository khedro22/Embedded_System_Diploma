#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter number of data: ");
    scanf("%d", &n);
    float arr[n];
    float avr, sum = 0;
    for(i = 0; i<n; i++)
    {
        printf("%d. Enter number: ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%f", &arr[i]);
    }
    for(i = 0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("Average = %.2f", (sum / n));

    return 0;
}
