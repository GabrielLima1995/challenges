#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main ()

{
     double  r,volume;

    scanf("%lf",&r);

    volume=(4.0*pi*pow(r,3))/3.0;

    printf("VOLUME = %.3lf\n",volume);

    return 0;

}
