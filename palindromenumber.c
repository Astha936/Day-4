#include<stdio.h>
int main()
{
    int n,rem,t,rev;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        rem=t%10;
        rev = rev*10+rem;
        t=t/10;
    }
    if(n==rev)
     {
        printf("%d is palindrome:",n);
     }
     else
     {
        printf("%d is not palindrome",n);
     }
     return 0;
}