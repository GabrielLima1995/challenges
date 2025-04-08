#include<stdio.h>

int main()

{
    int i,n,j=0,k=0,l=0,m=0;

    for (i=0;i<5;i++)
    {
        scanf("%d",&n);

        if (n < 0)
            m+=1;
        if ( n > 0)
            l+=1;
        if ((n%2) == 0 || n == 0)
            j+=1;
        else
            k+=1;
    }
       printf("%d valor(es) par(es)\n",j);
       printf("%d valor(es) impar(es)\n",k);
       printf("%d valor(es) positivo(s)\n",l);
       printf("%d valor(es) negativo(s)\n",m);

return 0;

}
