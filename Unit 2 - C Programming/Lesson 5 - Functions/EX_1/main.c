#include <stdio.h>
#include <stdlib.h>
int Check_Prime(int n);

int main()
{
    int a, b, flag;
    printf("Enter two numbers(intervals): ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d are: \n", a, b);
    for(a; a <= b; a++)
    {
        flag = Check_Prime(a);
        if(flag == 1)
            printf("%d\n", a);
    }

    return 0;
}
int Check_Prime(int n)
{
   int i, check = 1;
   for(i = 2; i < n; i++)
   {
       if(n % i == 0)
       {
           check = 0;
           break;
       }
   }
   return check;
}
