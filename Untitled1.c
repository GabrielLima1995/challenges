#include<stdio.h>
#include<math.h>

int main ()

{
  int a,b,c,i=0,maior;

  scanf("%d %d %d",&a,&b,&c);

 for (i=0;i<=1;i++)
  {
      maior=(a+b+abs(a-b))/2;

      a=maior;
      b=c;


  }

    printf("%d eh o maior\n",maior);

  return 0;
}
