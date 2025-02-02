
// Geometric Progression (GP)

#include<stdio.h>
#include<Math.h>
int main(){
    int a, r,n,sum;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum = a * (1 - pow(r,n)) / (1 - pow(r,n));
    printf("The Geometric Progression is %d",sum);
}