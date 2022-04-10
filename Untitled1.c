#include<stdio.h>

int main ()
{
    int p,q,i,j;
    float x,s=0;

    scanf("%d",&p);

    for (i=0;i<p;i++)
    {
       scanf("%d%d",&j,&q);

       switch(j)
       {

       case 1001:
        x=1.50;
        break;

       case 1002:
        x=2.50;
        break;

       case 1003:
        x=3.50;
        break;

       case 1004:
        x=4.50;
        break;

       case 1005:
        x=5.50;
        break;

       default:
        x=0;
        break;
       }
        s+=(q*x);
    }

    printf("%.2f\n",s);

    return 0;
}
