#include<stdio.h>

int main ()

{
    int entrada[3],aux[4],i;

    scanf("%d %d %d",&entrada[1],&entrada[2],&entrada[3]);

    aux[1]=entrada[1];
    aux[2]=entrada[2];
    aux[3]=entrada[3];


if (aux[1] > aux[2])

       {
           aux[4]=aux[1];
           aux[1]=aux[2];
           aux[2]=aux[4];
       }


    if (aux[1] > aux [3] )

    {
        aux[4]=aux[1];
        aux[1]=aux[3];
        aux[3]=aux[4];
    }

    if (aux[2] > aux[3])

    {
        aux[4]=aux[2];
        aux[2]=aux[3];
        aux[3]=aux[4];
    }


   printf("%d\n%d\n%d\n\n",aux[1],aux[2],aux[3]);


    printf("%d\n%d\n%d\n",entrada[1],entrada[2],entrada[3]);

    return 0;

}
