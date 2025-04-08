#include<stdio.h>

int main ()

{
    int i,j,aux,res=0;
    char a[8];

   for (j=1;j<=3;j++)
   {
    gets(a);

      while (strcmp(a,"caw caw") != 0)
      {
          if ( strcmp(a,"---")==0)
            aux =0;
          else
            if ( strcmp(a,"--*")==0)
            aux=1;
          else
            if ( strcmp(a,"-*-")==0)
            aux=2;
          else
            if ( strcmp(a,"-**")==0)
            aux=3;
          else
            if ( strcmp(a,"*--")==0)
            aux=4;
          else
            if ( strcmp(a,"*-*")==0)
            aux=5;
          else
            if ( strcmp(a,"**-")==0)
            aux=6;
          else
            if ( strcmp(a,"***")==0)
            aux=7;
          res+=aux;

         gets(a);

      }
      printf("%d\n",res);
      res=0;

   }

    return 0;
}
