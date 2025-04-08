#include<stdio.h>

int main ()

{
  int n,c[51],i,*ponteiro;
  ponteiro=&c[51];

  scanf("%d",&n);

      for (i=1;i<=n;i++)
      {
          c[51]=c[i];
          ponteiro[i]=ponteiro[i+1];

          printf("%d %d\n",i,c[i]);
      }


  return 0;
}

