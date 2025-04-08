#include<stdio.h>

int main ()

{
    int n,i,x;

    scanf ("%d",&n);

    for (i=0;i < n; i++)
    {
        scanf ("%d",&x);

        if (x == 0 )
            printf("NULL\n");

        if ((x%2) == 0 && x !=0 )
            printf("EVEN ");
        if ((x%2) != 0 && x !=0 )
            printf("ODD ");

        if ( x < 0)
            printf("NEGATIVE\n");

        if (x > 0)
            printf("POSITIVE\n");

    }


    return 0;
}
