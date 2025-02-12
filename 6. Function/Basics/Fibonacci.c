
// Write a recursive function to calculate the Fibonacci sequence.

#include <stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);
    fibonacci(n);
}

int fibonacci(int n){
    int next,a = 0,b=1;
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        a = b; 
        b = next;
        printf("%d ",next);
    }
    
}