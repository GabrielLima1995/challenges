#include<stdio.h>

int main ()
{
    int x,y,soma=0,aux,i;

    scanf("%d %d",&x,&y);

    if (y > x)
    {
        aux=x;
        x=y;
        y=aux;
    }

    for (i=y;i <=x;i++)
    {
        if ((i%13)!= 0)
        soma+=i;
    }
    printf("%d\n",soma);

    return 0;
}
