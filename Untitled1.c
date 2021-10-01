#include<stdio.h>

int main ()
{
    float m[12][12],soma=0.0;
    char o;
    int i,j,n=6,k=5,c=0;

    scanf("%c",&o);

    for (i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {

          scanf("%f",&m[i][j]);
        }
    }

        for (i=4;i>=0;i--)
    {
        for(j=k;j<=n;j++)
        {
          soma+=m[j][i];
          c++;
        }
        n++;
        k--;
    }

    if (o == 'S')

    {
       printf ("%.1f\n",soma);

    }

    if (o == 'M')
    {
         printf ("%.1f\n",soma/c);

    }

    return 0;
}

