#include<stdio.h>

int main ()
{
    float a,b,b1;

    scanf ("%f",&a);

    if (a <= 2000.00)
        printf("Isento\n");
    else

    if (a > 2000.00 && a <= 3000.00)
    {
        b=(a-2000)*0.08;

        printf("R$ %.2f\n",b);
    }

    else

    if (a > 3000.00 && a <= 4500.00)

    {
        b= (a-3000)*0.18;
        b1= 80+b;
        printf("R$ %.2f\n",b1);
    }

    else

    if (a > 4500.00)

    {
        b=(a-4500)*0.28;
        b1=350+b;
        printf("R$ %.2f\n",b1);
    }




    return 0;
}
