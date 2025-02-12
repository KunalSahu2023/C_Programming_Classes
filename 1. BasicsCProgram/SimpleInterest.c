
// Simple Interest Calculation

#include<Stdio.h>
int main(){
    int p,r,t,SI;
printf("Enter the Value of Principal (in Rs.)\n");
scanf("%d",&p);
printf("Enter the Value of Rate (in %)\n");
scanf("%d",&r);
printf("Enter the Value of Time (in year)\n");
scanf("%d",&t);
SI = (p * r * t ) /100;

printf("Simple Interest is %d Rs.\n",SI);

return 0;
}