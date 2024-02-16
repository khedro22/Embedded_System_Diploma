#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#define Area(r) ((PI) * (r) * (r))

int main()
{
    float radius;
    printf("Enter the radius: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &radius);
    printf("Area = %.2f", Area(radius));
    return 0;
}
