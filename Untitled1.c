#include<stdio.h>

int main ()

{
    int n,h[100],i,p=1;

    scanf("%d",&n);

    for(i=0;i<n;i++) scanf("%d",&h[i]);

    for(i=1;i<=(n-2);i++)
    {
       if (h[i] <= h[i-1] && h[i] >= h[i+1])
       p=0;
        if (h[i] >= h[i-1] && h[i] <= h[i+1])
       p=0;
    }

    if (n ==2)
    {
        if (h[0] == h[1])
            p=0;
        else
            p=1;
    }

    printf("%d\n",p);


    return 0;
}
