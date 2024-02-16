#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SStudent
{
    char m_Name[50];
    int m_Roll;
    float m_Marks;
};
int main()
{
    struct SStudent Stud;
    printf("Enter name: ");
    gets(Stud.m_Name);
    printf("Enter roll number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &Stud.m_Roll);
    printf("Enter marks: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &Stud.m_Marks);
    printf("Displaying information\n");
    printf("Name: %s\nRoll: %d\nMarks: %f", Stud.m_Name, Stud.m_Roll, Stud.m_Marks);

    return 0;
}
