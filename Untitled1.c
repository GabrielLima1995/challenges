#include<stdio.h>

int main ()

{
    double f=3.0000000000,den=0.0000000000;
    int i,n;

    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {

        den=(1/(den+6));
    }

      printf("%.10lf\n",f+den);


    return 0;
}
