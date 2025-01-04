
// 17. Arithmetic Progression (AP)

#include<stdio.h>
int main(){
    int a,d,n,sum;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of d\n");
    scanf("%d",&d);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum = n*(2*(a + d)*n)/2;
    printf("The Arithmetic Progression is %d",sum);
}