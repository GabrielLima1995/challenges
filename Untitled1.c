#include<stdio.h>

int main ()

{  int p,i,x,y;

   scanf("%d",&p);

   int vet[p],c[p];

  for (i=1;i<=p;i++)
  {
      vet[i]=i;
      c[i]=i;
  }
  for (i=2;i<=(p/2);i++)
  {
      x=vet[i];
   vet[i]=vet[(p/2)+i];
  }

 for (i=1;i<=p;i++)
  {
     printf("%d\n",vet[i]);
  }

    return 0;
}
