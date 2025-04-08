#include<stdio.h>

 unsigned long long int t,i,bin=0,dec=0,fib[10000],j;

int main ()

{

    scanf("%llu",&t);

    for (i=0;i<t;i++)
    {
        scanf("%llu",&bin);
        dec=conv(bin);
        for (j=1;j<=dec;j++)
        {
          if (j==1 || j==2)
          {
              fib[1]=1;
              fib[2]=1;
          }
          else
            fib[j]=fib[j-1]+fib[j-2];
        }
              printf("%.3llu\n",fib[dec]);

    }

    return 0;

}

int conv(int bin)

{
    int total=0;
    int potenc=1;
    while(bin > 0)
    {
        total+=bin%10*potenc;
        bin= bin /10;
        potenc*=2;
    }
    return total;
}



