#include<stdio.h>

int main ()

{
    int n,soma=0,i=0;
    float media;

    scanf("%d",&n);

    while (n >=0)
    {
       soma+=n;
       i++;

        scanf("%d",&n);

    }
    media=(float)soma/i;
    printf("%.2f\n",media);






    return 0;
}
