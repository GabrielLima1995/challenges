#include<stdio.h>


int main ()

{   int n,x,i,d=0,f=0;

    scanf ("%d",&n);

    for (i=0;i <n ;i++)

    {
    scanf ("%d",&x);

    if (x >= 10 && x <= 20)
        d++;
    else
        f++;

    }

    printf("%d in\n%d out\n",d,f);

    return 0;
}
