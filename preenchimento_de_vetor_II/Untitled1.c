#include<stdio.h>

int main ()
{
    int n[1000],t,i,j;

    scanf("%d",&t);

    for (i=0,j=0;i<1000;i++,j++)
    {
        n[i]=j;

        if(j==(t-1))
            j=-1;

    }

    for(i=0;i<1000;i++)
    {
      printf("N[%d] = %d\n",i,n[i]);
    }


    return 0;
}
