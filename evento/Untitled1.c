#include<stdio.h>

int main ()

{
    unsigned int x,m;

    scanf("%u%u",&x,&m);

    while (x != 0 && m != 0)
    {
        printf("%u\n",x*m);


       scanf("%u%u",&x,&m);

    }
    return 0;
}
