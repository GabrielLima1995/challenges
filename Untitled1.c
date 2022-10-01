#include<stdio.h>

int main ()
{
    int i=0,x=1;
    float nota,nota1,media;

    while (x == 1 )
    {
        while ( i<2)
    {
        scanf("%f",&nota);

        if ( nota >= 0.0 && nota <= 10.0 )
                    {
                        i++;
                        nota1+=nota;
                    }
         else
            printf("nota invalida\n");


    }
    media=(float)nota1/2;

       printf("media = %.2f\n",media);
       printf("novo calculo (1-sim 2-nao)\n");
       scanf("%d",&x);

       while (x <1 || x > 2)
       {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
       }
       media=0.0;i=0;nota1=0.0;

    }

    return 0;
}
