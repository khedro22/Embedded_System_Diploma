#include <stdio.h>
#include <stdlib.h>
struct SLength
{
    int feet;
    float inch; // 12 inch = 1 feet
};
int main()
{
    struct SLength D1, D2, SUM;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &D1.feet);
    printf("Enter inch: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &D1.inch);
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &D2.feet);
    printf("Enter inch: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &D2.inch);
    SUM.feet = D1.feet + D2.feet;
    SUM.inch = D1.inch + D2.inch;
    if(SUM.inch > 12)
    {
        SUM.inch -=  12;
        SUM.feet++;
    }
    printf("Sum of distance %d\'%.1f\"", SUM.feet, SUM.inch);
    return 0;
}
