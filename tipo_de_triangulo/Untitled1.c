#include<stdio.h>
#include<math.h>

int main ()

{
    double a,b,c,d;

    scanf("%lf %lf %lf",&a,&b,&c);

    if (a < b )

    {
        d=a;
        a=b;
        b=d;

    }

    if (a < c)

    {
        d=a;
        a=c;
        c=d;
    }

    if (b < c)

    {
       d=b;
       b=c;
       c=d;

    }

    if (a >= (b+c))
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if (pow(a,2) == (pow(b,2)+ pow(c,2)))
            printf("TRIANGULO RETANGULO\n");

        if (pow(a,2) > (pow(b,2)+ pow(c,2)))
            printf("TRIANGULO OBTUSANGULO\n");

        if (pow(a,2) < (pow(b,2)+ pow(c,2)))
             printf("TRIANGULO ACUTANGULO\n");
        if (a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
