#include<stdio.h>

int main ()
{

    int n,i,u,cont2=0,cont3=0,cont4=0,cont5=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&u);

        if (!(u%2))
            cont2++;
        if (!(u%3))
            cont3++;
        if (!(u%4))
            cont4++;
        if (!(u%5))
            cont5++;

    }

    printf("%d Multiplo(s) de 2\n",cont2);
    printf("%d Multiplo(s) de 3\n",cont3);
    printf("%d Multiplo(s) de 4\n",cont4);
    printf("%d Multiplo(s) de 5\n",cont5);


    return 0;
}
