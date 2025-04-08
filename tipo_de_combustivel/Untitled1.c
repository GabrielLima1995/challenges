#include<stdio.h>

int main ()
{
    int tipo=0,alcool=0,gasolina=0,diesel=0;

    while (tipo != 4)

    {
       scanf("%d",&tipo);

    if (tipo == 1)
        alcool++;
    if (tipo == 2)
        gasolina++;
    if (tipo == 3)
        diesel++;

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);

    return 0;
}
