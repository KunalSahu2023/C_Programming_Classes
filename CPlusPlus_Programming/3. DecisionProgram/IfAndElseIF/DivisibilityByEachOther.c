Check if two numbers are divisible by each other.

#include<stdio.h>
int main(){
    int emp1, emp2;
    printf("Enter the Salry of First Employee\n");
    scanf("%d",emp1);
        printf("Enter the Salry of Second Employee\n");
    scanf("%d",emp2);
    if(emp1 > emp2){
        printf("Salary of Emp1 = %d is Greater than Emp2 = %d");
    }
    else if(emp1 < emp2){
        printf("Salary of Emp2 = %d is Greater than Emp1 = %d");
    }
    else{
        printf("Salary of Emp1 and Emp2 are Equal" );
    }
}