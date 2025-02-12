
// Write a program that takes input for a structure and prints it.

#include <stdio.h>
struct Employee
{
    int idNo;
    char name[10];
    float salary;
};

int main()
{
    printf("**** Structure Implementation ****\n ");
    struct Employee emp1;
    printf("Enter the idNo : \n");
    scanf("%d", &emp1.idNo);
    printf("Enter the Salary : \n");
    scanf("%f", &emp1.salary);
    printf("Enter the name : \n");
    scanf("%s", &emp1.name);
    printf("idNo : %d Salary: %f Name : %s", emp1.idNo, emp1.salary, emp1.name);
    return 0;
}