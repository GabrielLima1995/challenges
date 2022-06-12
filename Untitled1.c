#include<stdio.h>

int main()

{
    int n,m,l,c,resl,resc,i,t;

   scanf("%d",&t);

   for(i=0;i<t;i++)
   {
    scanf("%d%d",&n,&m);

    l=n-2;
    c=m-2;

    if (l%3 != 0)
      resl=(l/3)+1;
      else
      resl=(l/3);

    if (c%3 != 0)
      resc=(c/3)+1;
    else
     resc=(c/3);

    printf("%d\n",resc*resl);

   }


    return 0;
}
