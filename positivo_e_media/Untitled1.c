#include<stdio.h>

int main ()

{   int i,j=0;
    float a,d=0.0;

    for (i=0;i<6;i++)
    {
        scanf("%f",&a);

        if ( a > 0)
            {
                d+=a;
                j=j+1;
            }

    }

    printf("%d valores positivos\n",j);
    printf("%.1f\n",d/j);

    return 0;
}
