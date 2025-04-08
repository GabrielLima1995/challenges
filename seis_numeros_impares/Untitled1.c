#include<stdio.h>

int main ()

{
    int i,x;

    scanf("%d",&x);

    i = x;

    while (i < (x+12))
    {
        if ((i%2)!= 0)
          {
            printf("%d\n",i);

          }

     i++;
    }

    return 0;
}
