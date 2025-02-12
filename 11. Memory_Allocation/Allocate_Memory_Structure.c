
// Use malloc() to dynamically allocate memory for a structure and input values for its members.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[20];
        int roll;
        float marks;
    };

    struct student *s = (struct student *)calloc(2, sizeof(struct student));
    if (s == NULL)
    {
        printf("Memory not allocated\n");
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Enter details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s->name);
        printf("Enter roll number: ");
        scanf("%d", &s->roll);
        printf("Enter marks: ");
        scanf("%f", &s->marks);
        printf("Details of student %d\n", i + 1);
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s->name, s->roll, s->marks);
    }

    free(s);

    return 0;
}
