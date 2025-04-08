#include<stdio.h>

int main ()

{
    int n,j[101],i=0,cont=0;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }

    i=0;

    while ((i<(n-1) )&&(cont==0))
    {

     i++;

     if (j[i] < j[i-1] )
     {
         cont=i;
     }

    }

    if (cont == 0)
    printf("%d\n",cont);
    else
    printf("%d\n",cont+1);



    return 0;
}
