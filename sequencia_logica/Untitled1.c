#include<stdio.h>

int main ()
{
    int n,i,j,k,l,p,q;

    scanf("%d",&n);

    for (i=1,k=1,p=1;i<=n,k<=n,p<=n;i++,k++,p++)

    {
      printf("%d %d %d\n",i,k*k,p*p*p);
      for(j=i,l=i,q=i;j<(i+1),l<(i+1),q<(i+1);j++,l++,q++)
      {

          printf("%d %d %d\n",i,l*l+1,q*q*q+1);

      }
    }


    return 0;
}
