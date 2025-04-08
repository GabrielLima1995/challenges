#include<stdio.h>

int main ()

{
    int x,i,soma=0;

    scanf("%d",&x);

    while (x!= 0)
    {
        for (i=1;i<=5;x++)
        {
            if ((x%2)==0)
            {
                i++;
                soma+=x;
            }
        }
        printf("%d\n",soma);
        soma=0;

    scanf("%d",&x);

    }



    return 0;
}
