#include<stdio.h>

int main ()

{
    int h,m,mf;

     while (scanf("%d:%d",&h,&m) != EOF)
     {
         mf=480-(h*60)-m;

         if (mf<60)
            printf("Atraso maximo: %d\n",60-mf);
         else
          printf("Atraso maximo: 0\n");
     }

    return 0;
}
