#include<stdio.h>

int main ()

{
    int i,n,j=0;

    for (i=0;i<5;i++)
    {
        scanf("%d",&n);

        if ((n%2)== 0)
            j+=1;
    }

        printf("%d valores pares\n",j);


    return 0;
}
