#include<stdio.h>

int main ()

{
    int i;

    scanf("%d",&i);
    while (i != -1)
    {
    if (i != 0 && i != 1)
    printf("1\n");
    else
    printf("0\n");
    scanf("%d",&i);
    }

    return 0;
}
