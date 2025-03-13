#include<stdio.h>

int main ()

{
    int n,i,j;
    char c[10001];
    double r;

    scanf("%d",&n);
    getchar();
    for (i=0;i<n;i++)
    {
        gets(c);

        j=strlen(c);
        r=(double)j/100;
        printf("%.2lf\n",r);
    }

    return 0;
}
