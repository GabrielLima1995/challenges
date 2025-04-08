#include<stdio.h>

int main ()
{
    double m[12][12],soma=0.0;
    char o;
    int i,j,n=6,k=5,c=0;

    scanf("%c",&o);

    for (i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {

          scanf("%lf",&m[i][j]);
        }
    }

        for (i=7;i<=11;i++)
    {
        for(j=k;j<=n;j++)
        {
          soma+=m[i][j];
          c++;
        }
        n++;
        k--;
    }

    if (o == 'S')

    {
       printf ("%.1lf\n",soma);

    }

    if (o == 'M')
    {
         printf ("%.1lf\n",soma/c);

    }

    return 0;
}

