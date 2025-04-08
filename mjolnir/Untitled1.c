#include<stdio.h>

int main()

{
    char c[7];
    int n,i,j;

    scanf("%d",&j);

    for(i=0;i<j;i++)
    {
        scanf("%s%d",&c,&n);

        if (strcmp(c,"Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
