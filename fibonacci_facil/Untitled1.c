#include<stdio.h>

int main ()

{

    int n,i,f[50],j=0;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       if (i==1)
        f[i]=0;
       else
        if (i ==2 || i == 3)
        f[i]=1;
       else
        if (i > 3)
        f[i]=f[i-1]+f[i-2];
    printf("%d",f[i]);

    if (i != n)
        printf(" ");
    else
        printf("\n");

    }


    return 0;
}
