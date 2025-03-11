#include<stdio.h>

int main ()
{
    int m,n,c,i,num,den;
    float res;

      while ( scanf ("%d",&m) != EOF)
      {

        for(i=0,num=0,den=0;i<m;i++)
        {
           scanf("%d %d",&n,&c);
           num+=n*c;
           den+=c;
        }
        den*=100;
        res= (float) num/den;
        printf("%.4f\n",res);
      }

  return 0;
}
