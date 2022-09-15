#include<stdio.h>
#include<math.h>

int main ()
{
    double i,j,y=1.0;

    for (i=0.0;i<=2.0;i+=0.2)
    {
      for (j=y;j < (y+3);j++)
      {

          if ((fabs(i)<0.000001)||(fabs(i-1)<0.000001)||(fabs(i-2)<0.000001))
          {
              printf("I=%.lf J=%.lf\n",i,j);
          }
          else
              printf("I=%.1lf J=%.1lf\n",i,j);


      }
        y=j-2.8;
    }


    return 0;
}
