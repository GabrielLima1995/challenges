#include<stdio.h>

int main ()
{
    int x,y,i,j;

    scanf("%d %d",&x,&y);

    for (i=1,j=1;i<=y;i++,j++)
    {

        printf("%d",i);
        if (j!= x)
            printf(" ");

        if (j == x)
        {
            printf("\n");
            j=0;
        }


    }

    return 0;
}
