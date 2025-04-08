#include<stdio.h>

int main ()

{   int i,j=0;
    float a;

    for (i=0;i<6;i++)
    {
        scanf("%f",&a);

        if ( a > 0)

            j=j+1;

    }

    printf("%d valores positivos\n",j);



    return 0;
}
