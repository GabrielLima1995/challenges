#include<stdio.h>

int main ()
{
    int n,m,i,r[1001],j[1001],var[1001],aux,y,cont;

    scanf("%d%d",&n,&m);

    for(i=0;i< n;i++)
    {
        scanf("%d",&j[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&r[i]);
    }

    for(i=0,cont=0;i<m;i++)
    {
        for (y=0,aux=0;y<n;y++,aux++)
        {
          if (r[i] == j[y])
          {
              var[i]= aux;
              cont++;
              printf("%d \n", y);
              printf("cont %d\n ", cont);
          }

        }
    }


    return 0;
}
