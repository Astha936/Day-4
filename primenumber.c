#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     if(n%i==0)
     {
        count++;
     }
    }
    if(count==2)
    {
        printf("The given number is prime number:");
    }
     else{
        printf("The number is not prime;");
     }
    
    return 0;
}