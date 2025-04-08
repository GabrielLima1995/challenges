#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main ()

{
    double r,area;

    scanf("%lf",&r);

    area=pi*pow(r,2);

    printf("A=%.4lf\n",area);

    return 0;

}
