#include<stdio.h>

int main ()

{
    int h,m,o,n,i;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d%d%d",&h,&m,&o);

    if (o == 0)
        printf("%.2d:%.2d - A porta fechou!\n",h,m);
    else
        printf("%.2d:%.2d - A porta abriu!\n",h,m);
    }


    return 0;
}
