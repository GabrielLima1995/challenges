#include<stdio.h>

int main ()
{
     int a,b,q,r;

     scanf("%d %d",&a,&b);

     q=a/b;

     r=a%b;

  if (r < 0 && a < 0 && b > 0 )
     {
       q=a/b-1;

       r=a-q*b;
     }

 if (r< 0 && a < 0 && b < 0 )

    {
       if (r < 0)
     {

        q=a/b+1;

        r=a-q*b;

     }


    }
     printf("%d %d\n",q,r);

    return 0;
}
