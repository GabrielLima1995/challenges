#include<stdio.h>

int main()
{
    char c[102];
    int i,n,cont=0,flag=0;

    gets(c);

    n=strlen(c);

   for(i=0;i<n;i++)
   {
      if (c[i] =='1')
        cont++;
   }

   if ((cont%2)!=0)
    flag=1;

   printf("%s%d",c,flag);

    return 0;
}
