#include<stdio.h>

int main ()

{
    char c[16];
    int i;
    long long int y,cont=1;

    scanf("%s",c);

    while( strcmp(c,"0") != 0 )
    {

     y=strlen(c);

     for(i=1,cont=1;i<=y;i++) cont*=i;

     printf("%lld\n",cont);
     scanf("%s",c);
    }

    return 0;
}
