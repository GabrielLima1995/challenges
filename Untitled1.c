#include<stdio.h>

int main()

{
    int n,x,y,i,a,j,cont=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)

    {
        scanf("%d %d",&x,&y);

        if (x < y)
        { a=x;
          x=y;
          y=a;
        }

        for (j=(y+1);j < x;j++)
        {
            if ((j%2) != 0)
                cont+=j;

        }

        printf("%d\n",cont);

        cont=0;

    }
    return 0;
}
