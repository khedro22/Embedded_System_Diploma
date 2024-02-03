#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter rows and columns of matrix: ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d", &row, &col); //enter the size of matrix
    int arr[row][col];
    int tarr[col][row];
    int i, j;
    for(i = 0; i < row; i++) // enter the elements of matrix
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter element %d%d: ", i+1, j+1);
            fflush(stdin);fflush(stdout);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            tarr[j][i] = arr[j][i]; // generate the transpose of matrix
        }
    }
    printf("Enterd Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d\t", tarr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
