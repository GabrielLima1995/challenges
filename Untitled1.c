#include<stdio.h>

int main ()
{
    float m[12][12],aux=0.0;
    int i,j,l;
    char ch;

    scanf("%d %c",&l,&ch);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&m[i][j]);
        }
    }

    if (ch == 'S')
    {
        for(j=0;j<12;j++)
        {
            aux+=m[l][j];
        }
    }

    if (ch == 'M')
    {
        for(j=0;j<12;j++)
        {
            aux+=m[l][j]/12.0;
        }
    }

    printf("%.1f\n",aux);

    return 0;
}
