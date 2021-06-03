#include <stdio.h>
struct employee
{
int age;
float salary;
char name;
};
void main()
{
    int *ptr;
    struct employee an_employee;
    ptr = &an_employee;
    an_employee.age=65;
    printf ("%d",ptr->age);
}
