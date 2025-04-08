#include <stdio.h>

int main()

{
    int x,y,i,j=0;

    scanf ("%d %d",&x,&y);

    if ( x > y )
    {
        i=x;
        x=y;
        y=i;
    }
    if (x != y)
        y--;

    while ( y != x )
    {

           if ((y%2) != 0)
             {
                 j+=y;
             }

            y--;
    }

    printf("%d\n",j);

    return 0;
}
