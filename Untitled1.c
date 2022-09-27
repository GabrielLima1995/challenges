#include<stdio.h>

int main ()
{
    int i=0;
    float nota,nota1,media;

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


    return 0;
}
