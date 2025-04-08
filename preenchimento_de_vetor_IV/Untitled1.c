#include<stdio.h>

int main ()

{
    int par[5],impar[5],p=0,i=0,c,x;

    for (c=0;c<15;c++)
    {
        scanf("%d",&x);

        if ( (x%2) == 0 && p < 5)
        {
            par[p]=x;
            p++;
        }
        else
        if ( (x%2) != 0 && i < 5)
        {
           impar[i]=x;
            i++;
        }


    if (i >=5 )

    {
        for(i=0;i<5;i++)
        {
            printf("impar[%d] = %d\n",i,impar[i]);
        }
        i=0;
    }
    else
     if (p >=5 )

    {
        for(p=0;p<5;p++)
        {
            printf("par[%d] = %d\n",p,par[p]);
        }
        p=0;
    }

    }

    if (c == 15)

    {
         for(x=0;x<i;x++)
        {
            printf("impar[%d] = %d\n",x,impar[x]);
        }

         for(x=0;x<p;x++)
        {
            printf("par[%d] = %d\n",x,par[x]);
        }

    }

    return 0;
}
