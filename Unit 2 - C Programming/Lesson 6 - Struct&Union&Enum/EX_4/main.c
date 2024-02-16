#include <stdio.h>
#include <stdlib.h>
struct SStudents
{
    char S_Name[30];
    float S_Marks;
};
int main()
{
    struct SStudents Class[3];
    int i;
    printf("Enter information of students: \n");
    for(i = 0; i < 3; i++) //for 10 students
    {
        printf("For roll number %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", Class[i].S_Name);
        printf("Enter marks: ");
        fflush(stdout);fflush(stdin);
        scanf("%f", &Class[i].S_Marks);
        printf("\n");
    }
    printf("Displaying information of students\n");
    for(i = 0; i < 3; i++)
    {
        printf("Information roll for number %d:\n", i+1);
        printf("Name: %s\n", Class[i].S_Name);
        printf("Marks: %.2f\n", Class[i].S_Marks);

    }
    return 0;
}
