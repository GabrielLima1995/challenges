#include<stdio.h>

int main ()

{
    int n,i,ln,numero;
    float notas=-1.0,l;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {

        scanf("%d%f",&ln,&l);

        if (l > notas)
        {
            notas = l;
            numero=ln;
        }
    }

    if (notas < 8.0)
        printf("Minimum note not reached\n");

    else
        printf("%d\n",numero);

    return 0;
}
