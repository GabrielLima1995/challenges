#include<stdio.h>

int main ()

{
    int e,count=0,i=0;
    double r;
    char c[200];

    while (gets(c))
    {
       scanf("%d",&e);
       fflush(stdin);
       count+=e;

       i++;
    }

    r=(double)count/i;


    printf("%.1lf\n",r);


    return 0;
}
