
// Write a program to calculate the average salary of employees using an array of structures.

#include <stdio.h>
struct Employee
{
    int id, salary;
    char name[10];
};

int main()
{
    printf("**** Student Details ****\n ");
    int n;
    int sum = 0, averageEmployee;
    printf("Enter the number of employees : \n");
    scanf("%d", &n);
    struct Employee s1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ID for %d : \n", i + 1);
        scanf("%d", &s1[i].id);
        printf("Enter the Name for %d : \n", i + 1);
        scanf("%s", s1[i].name);
        printf("Enter the Salary for %d : \n", i + 1);
        scanf("%d", &s1[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Id for employee %d is : %d\n", i + 1, s1[i].id);
        printf("Name for employee %d is : %s\n", i + 1, s1[i].name);
        printf("Salary for employee %d is : %d\n", i + 1, s1[i].salary);
        sum = sum + s1[i].salary;
        averageEmployee = sum / n;
    }
    printf("Average of %d employees is : %d", n, averageEmployee);

    return 0;
}