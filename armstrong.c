#include<stdio.h>
#include<math.h>
int main()
{
int n,t,rem,digits=0;
int sum = 0; 
printf("Enter the number:");
scanf("%d",&n);
// count the number of digits
t=n;
while(t!=0)
{
    digits++;
    t/=10;
}
t=n;
while(t!=0)
{
   rem = t%10;
   sum+=pow(rem,digits);
   t/=10;
}
if(sum==n)
{
    printf("%d is an armstrong number:\n",n);
}
else{
    printf("%d is not an armstrong number:\n",n);
}
return 0;
}