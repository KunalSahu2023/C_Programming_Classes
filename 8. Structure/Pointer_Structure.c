
// Create an array of structures and access it using pointers.

#include <stdio.h>

typedef struct Student
{
    int rollNo;
    char name[10];
    int age;
} Student;

int main()
{
    printf("***** Structure Using Pointer\n");
    Student stu;
    struct Student *ptr;
    ptr = &stu;
    ptr->rollNo = 101;
    ptr->age = 20;
    printf("Enter the Name : \n");
    scanf("%s", ptr->name);
    printf("Student Details\n");
    printf("RollNo : %d\n", ptr->rollNo);
    printf("Name : %s\n", ptr->name);
    printf("Age : %d\n", ptr->age);

    return 0;
}