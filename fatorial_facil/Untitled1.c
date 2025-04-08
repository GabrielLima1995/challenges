#include<stdio.h>


int main ()
{

    int n,i,mult=1;

    scanf("%d",&n);

    for (i=n;i>1;i--)

    {    mult*=i;


    }

   printf("%d\n",mult);

    return 0;
}
