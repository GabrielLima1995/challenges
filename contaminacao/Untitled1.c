#include<stdio.h>

int main ()

{

    int n,m,i,j;

    scanf ("%d%d",&n,&m);

    char matriz[n][m];

    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%c\n",&matriz[i][j]);

        }
    }


            printf("%c",matriz[n][m]);






    return 0;

}
