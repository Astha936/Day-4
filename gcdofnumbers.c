#include<stdio.h>
    int gcdofnum(int a, int b)
    {
        while(b!=0)
        {
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    int main()
    {
        int n1,n2;
        int gcd;
        printf("Enter two positive numbers:");
        scanf("%d %d",&n1,&n2);
        if(n1<=0||n2<=0)
        {
            printf("Enter positive number:");
            return 1;
        }
        int res;
         res = gcdofnum(n1,n2);
        printf("GCD of %d and %d is:%d\n",n1,n2,res);
        return 0;
    }


