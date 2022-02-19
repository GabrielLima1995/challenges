#include<stdio.h>

int main ()

{
     int t,i,y,n;

     scanf("%d",&t);

     for(i=0;i<t;i++)
     {
         scanf("%d",&n);

         if ((n%2) == 0)
            printf("1\n");
         else
            printf("9\n");
     }

    return 0;
}
