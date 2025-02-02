
// Input salaries of two employees and compare them.

#include <stdio.h>
int main()
{
    int emp1, emp2;
    printf("Enter the Salary of First Employee\n");
    scanf("%d", &emp1);
    printf("Enter the Salary of Second Employee\n");
    scanf("%d", &emp2);
    if (emp1 > emp2)
    {
        printf("Salary of Emp1 = %d is Greater than Emp2 = %d", emp1, emp2);
    }
    else if (emp1 < emp2)
    {
        printf("Salary of Emp2 is Greater than Emp1");
    }
    else
    {
        printf("Salary of Emp1 and Emp2 are Equal");
    }
}