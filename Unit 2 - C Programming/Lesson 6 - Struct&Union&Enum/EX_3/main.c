#include <stdio.h>
#include <stdlib.h>
struct SComplex
{
    float Real;
    float Img;
};
int main()
{
    struct SComplex X, Y, Z;
    printf("For 1st complex number\n");
    printf("Enter the real and imaginary part: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &X.Real, &X.Img);
    printf("For 2nd complex number\n");
    printf("Enter the real and imaginary part: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &Y.Real, &Y.Img);
    Z.Real = X.Real + Y.Real;
    Z.Img = X.Img + Y.Img;
    printf("Sum = %f + %fi", Z.Real, Z.Img);
    return 0;
}
