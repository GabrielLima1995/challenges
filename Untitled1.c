#include<stdio.h>

int main ()

{
   unsigned long long int t,n,f[61]={0,1},i,j;

  scanf("%llu",&t);

  for (i=0;i<t;i++)
  {
      scanf("%llu",&n);

      for(j=2;j<=n;j++)
      {
        f[j]=f[j-1]+f[j-2];
      }
      printf("Fib(%llu) = %llu\n",n,f[n]);
  }
    return 0;
}
