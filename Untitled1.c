#include<stdio.h>

int main ()
{
    float m[12][12],aux=0.0;
    int i,j,c;
    char ch;

    scanf("%d %c",&c,&ch);

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
            aux+=m[j][c];
        }
    }

    if (ch == 'M')
    {
        for(j=0;j<12;j++)
        {
            aux+=m[j][c]/12.0;
        }
    }

    printf("%.1f\n",aux);

    return 0;
}

