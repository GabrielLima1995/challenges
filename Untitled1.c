#include<stdio.h>
#include<stdlib.h>


int main()

{
    unsigned int a,b,aux;

    while (scanf("%u",&a) && scanf("%u",&b)!= EOF)

    {

    aux=a^b;

    printf("%u\n",aux);

    }



return 0;

}




