#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b,c;
    char j;

    scanf("%d%d%d",&a,&b,&c);

    if (pow(a,2)==(pow(b,2)+pow(c,2)) || pow(b,2)==(pow(a,2)+pow(c,2)) || pow(c,2)==(pow(b,2)+pow(a,2)))
        j='S';
    else
        j='N';

    if (a < (b+c) && b < (a+c) && c < (a +b))

    {
        if ((a == b && b!=c) ||(a == c && a != b)|| (b == c && c!=a))
        printf("Valido-Isoceles\nRetangulo: %c\n",j);
        else
        if (a == b && a==c && b == c)
        printf("Valido-Equilatero\nRetangulo: %c\n",j);
        else
        printf("Valido-Escaleno\nRetangulo: %c\n",j);
    }

    else
    printf("Invalido\n");

    return 0;
}
