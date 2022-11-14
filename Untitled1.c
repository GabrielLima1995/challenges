#include<stdio.h>

int main ()

{
    int q,e,j,i,y,b=0,k,c=0;

    scanf("%d%d",&q,&e);

    int d[e],s[q];

    for (i=0;i<e;i++)
    {

        scanf("%d",&d[i]);
    }
    for (j=0;j<q;j++)
    {

        scanf("%d",&s[j]);

        for (y=j-1;y>=0;y--)
        {
            if (s[j] == s[y])
             b++;
        }
        for (k=0;k<e;k++)
        {
            if(d[k] == s[j])
                c++;
        }
        if (c != 0 || b != 0)
            printf("0\n");
        else
            printf("1\n");
        c=0;b=0;
    }


    return 0;
}
