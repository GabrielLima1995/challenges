#include<stdio.h>

int main()
{   int c1,p1,c2,p2;
    double v1,v2;

    scanf("%d %d %lf %d %d %lf",&c1,&p1,&v1,&c2,&p2,&v2);

    printf("VALOR A PAGAR: R$ %.2lf\n",p1*v1+p2*v2);

    return 0;
}
