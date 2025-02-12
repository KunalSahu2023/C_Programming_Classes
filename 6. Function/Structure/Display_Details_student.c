
// Write a function to display the details of a structure (e.g., student information structure).

#include <stdio.h>

struct Student
{
    int rollNo, age, marks;
    char name[10];
    float percentage;
    char state[20];
    char city[15];
};

int displayInfo(struct Student s1);

int main()
{
    printf("**** Student Details ****\n ");

    struct Student s1;

    displayInfo(s1);

    return 0;
}

int displayInfo(struct Student s1)
{
    printf("Enter the RollNo : \n");
    scanf("%d", &s1.rollNo);
    printf("Enter the Name : \n");
    scanf("%s", &s1.name);
    printf("Enter the Age : \n");
    scanf("%d", &s1.age);
    printf("Enter the Percentage : \n");
    scanf("%f", &s1.percentage);
    printf("Enter the City : \n");
    scanf("%s", &s1.city);
    printf("Enter the State : \n");
    scanf("%s", &s1.state);

    printf("RollNo : %d  Name : %s Age : %d Percentage : %f City : %s State : %s", s1.rollNo, s1.name, s1.age, s1.percentage, s1.city, s1.state);
}
