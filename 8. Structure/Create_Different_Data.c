
// Create a structure that stores different types of data(integer, float, character), and display them.

#include <stdio.h>

typedef struct Student
{
    int rollNo;
    char name[10];
    float percentage;
} Student;
int main()
{
    printf("***** Different data types structure ***** \n");
    Student stu;

    printf("Enter the RollNo :\n");
    scanf("%d", &stu.rollNo);
    printf("Enter the name :\n");
    scanf("%s", &stu.name);
    printf("Enter the Percentage :\n");
    scanf("%f", &stu.percentage);

    printf("RollNo : %d\n", stu.rollNo);
    printf("Name : %s\n", stu.name);
    printf("Percentage : %.2f", stu.percentage);

    return 0;
}