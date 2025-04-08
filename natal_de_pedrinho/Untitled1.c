#include<stdio.h>

int main ()
{
    int m,d,r=0,i;

  while ( scanf("%d%d",&m,&d)!=EOF )
  {
      for(i=1;i<m;i++)
   {
       if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        r+=31;
        else
       if (i==2)
        r+=29;
       else
        r+=30;
   }

     r=360-r-d;

     if (r==1)
        printf("E vespera de natal!\n");
     else
    if (r==0)
        printf("E natal!\n");
    else
    if (r<0)
    printf("Ja passou!\n");
    else
        printf("Faltam %d dias para o natal!\n",r);

        r=0;
  }

    return 0;
}
