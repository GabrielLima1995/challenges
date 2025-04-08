#include<stdio.h>

int main ()

{
    int n,i,aux;
    scanf("%d",&n);
    char m[n];
    while (scanf("%s",m) != EOF)
    {

    for(i=0,aux=0;i<n;i++)  aux+=(m[i]-48);
    if ((aux%3) == 0)
        printf("%d sim\n",aux);
    else
        printf("%d nao\n",aux);
        scanf("%d",&n);
        char m[n];

    }
    return 0;
}
