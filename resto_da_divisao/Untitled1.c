#include<stdio.h>

int main()

{
 int x,y,a,i;

scanf("%d %d",&x,&y);

if(y < x)
{
  a=x;
  x=y;
  y=a;
}

for(i=(x+1);i<y ;i++)
{
    if((i%5) == 2 || (i%5) == 3)
        printf("%d\n",i);
}


 return 0;
}
