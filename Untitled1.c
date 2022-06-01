#include<stdio.h>

int main ()
{
    double a,b,r,x;

    scanf("%lf%lf",&a,&b);

    r=b-a;

    x=(100*r)/a;

    printf("%.2lf%%\n",x);

    return 0;
}
