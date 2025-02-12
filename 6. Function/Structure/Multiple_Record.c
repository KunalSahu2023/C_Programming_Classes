
// C program to store and display multiple student records using structures

#include <stdio.h>

struct Student
{
    int rollNo, age, marks;
    char name[10];
    float percentage;
    char state[20];
    char city[15];
};

void displayInfo(struct Student s1[]);

int main()
{
    printf("**** Student Details ****\n");

    struct Student s1[5];
    displayInfo(s1);

    return 0;
}

void displayInfo(struct Student s1[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s1[i].rollNo);

        printf("Enter Name: ");
        scanf("%9s", s1[i].name);

        printf("Enter Age: ");
        scanf("%d", &s1[i].age);

        printf("Enter Marks: ");
        scanf("%d", &s1[i].marks);

        printf("Enter Percentage: ");
        scanf("%f", &s1[i].percentage);

        printf("Enter City: ");
        scanf("%14s", s1[i].city);

        printf("Enter State: ");
        scanf("%19s", s1[i].state);
    }

    printf("\n***** Student Records *****\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s1[i].rollNo);
        printf("Name: %s\n", s1[i].name);
        printf("Age: %d\n", s1[i].age);
        printf("Marks: %d\n", s1[i].marks);
        printf("Percentage: %.2f%%\n", s1[i].percentage);
        printf("City: %s\n", s1[i].city);
        printf("State: %s\n", s1[i].state);
    }
}
