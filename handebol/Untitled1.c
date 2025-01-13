#include<stdio.h>

int main ()

{
    int n,m,j,i,a,y=0,f=0;

    scanf("%d%d",&n,&m);


    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a);

            if (a == 0)
              y++;
        }
        if (y == 0)
            f++;
        y=0;
    }

    printf("%d\n",f);


    return 0;
}
