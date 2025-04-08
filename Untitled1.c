#include<stdio.h>

int main()
{
    int n,i,aux=100000000,aux1;

    scanf("%d",&n);

    int x[n];

    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

   for (i=0;i<n;i++)
   {
      if (x[i] < aux)
       {
           aux=x[i];
           aux1=i;
       }

   }

  printf("Menor valor: %d\n",aux);
   printf("Posicao: %d\n",aux1);
    return 0;
}
