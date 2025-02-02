
// Convert a grade into marks range (e.g., A -> 90-100).

#include <stdio.h>

// Use logical conditions to assign grades based on marks input.

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the Marks\n");
    scanf("%d", &marks);

    if (marks >= 85)
    {
        printf("Grade A");
    }
    else if (marks < 85 && marks > 70)
    {
        printf("Grade B");
    }
    else if (marks >= 70 && marks > 60)
    {
        printf("Grade C");
    }
    else if (marks >= 60 && marks > 45)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade E");
    }
    printf("\n");
}