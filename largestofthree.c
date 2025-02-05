#include<stdio.h>
int main()
    {
      int a,b,c,D;
      printf("Enter the numbers:");
      scanf("%d%d%d",&a,&b,&c);
      D = (a>b)?a:b;
      (c>D)?printf("%d",c):printf("%d",D);
      return 0;
    }
