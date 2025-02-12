
// Write a program that demonstrates nested structures(a structure inside another structure).

#include <stdio.h>

struct Address
{
    int streetNo;
    char streetName[20];
    char city[10];
    char state[];
};
struct Student
{
    int rollNo, age, marks;
    char name[10];
    float percentage;
    struct Address Add;
};

int main()
{
    struct Student stu;

    printf("Nested  Structure Implementation\n");
    printf("Address Details:\n");
    printf("Enter the StreetNo:\n");
    scanf("%d", &stu.Add.streetNo);
    printf("Enter the StreetName:\n");
    scanf("%s", stu.Add.streetName);
    printf("Enter the City\n");
    scanf("%s", stu.Add.city);
    printf("Enter the State:\n");
    scanf("%s", stu.Add.state);

    printf("Student Details:\n");
    printf("StreetNo : %d\n", stu.Add.streetNo);
    printf("StreetName : %s\n", stu.Add.streetName);
    printf("City : %s\n", stu.Add.city);
    printf("State : %s\n", stu.Add.state);

    return 0;
}
