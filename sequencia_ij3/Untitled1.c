#include<stdio.h>

int main ()
{
    int i,j,y=7;

    for (i=1;i<=9;i=i+2)
    {

        for (j=y;j>(y-3);j--)
        {
          printf("I=%d J=%d\n",i,j);
        }
        y=j+5;
    }
    return 0;
}

