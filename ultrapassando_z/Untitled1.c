#include<stdio.h>

int main ()

{
    int x,z,i=0,soma=0;

    scanf("%d %d",&x,&z);

    while (x >= z)
    {
        scanf("%d",&z);
    }

    while (soma < z)

    {
        soma+=x++;

        i++;

    }

    printf("%d\n",i);




    return 0;
}
