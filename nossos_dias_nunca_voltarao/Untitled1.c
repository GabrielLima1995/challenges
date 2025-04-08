#include<stdio.h>

int main ()

{
    char a[36]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int i,n;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {

      printf("%c",a[i-1]);


    }
    printf("\n");


    return 0;
}
