
// Write a program that returns a structure from a function.

#include <stdio.h>

struct Employee
{
    int id;
    char name[10];
    float salary;
    char state[20];
    char city[15];
};

void returnStructure(struct Employee emp);

int main()
{
    printf("**** Student Details ****\n ");

    struct Employee emp;

    returnStructure(emp);

    return 0;
}

void returnStructure(struct Employee emp)
{
    printf("Enter the ID : \n");
    scanf("%d", &emp.id);
    printf("Enter the Name : \n");
    scanf("%s", &emp.name);
    printf("Enter the Salary : \n");
    scanf("%f", &emp.salary);
    printf("Enter the City : \n");
    scanf("%s", &emp.city);
    printf("Enter the State : \n");
    scanf("%s", &emp.state);

    printf("ID : %d  Name : %s Percentage : %.2f City : %s State : %s", emp.id, emp.name, emp.salary, emp.city, emp.state);
}