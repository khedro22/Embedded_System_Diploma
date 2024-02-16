#include <stdio.h>
#include <stdlib.h>

struct SData
{
    char *name;
    int ID;
};

int main()
{
    struct SData emp1 = {"Mohamed", 1005}, emp2 = {"Alex", 1002}, emp3 = {"Adam", 1001};
    struct SData (*Ptr_structures[]) = {&emp1, &emp2, &emp3};
    struct SData (*(*ptr)[3]) = &Ptr_structures;

    printf("Employee Name: %s\n", (*(*(*(ptr) + 1))).name);
    printf("Employee ID: %d", (*(*(*(ptr) + 1))).ID);

    return 0;
}
