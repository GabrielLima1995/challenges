#include<stdio.h>

int main ()

{
    int q,d,p,i,dif=0,j;

    scanf("%d%d%d",&q,&d,&p);


    for (i=p,j=q;dif<=(3*d);j+=j,i+=i)
    {
       printf("%d\n",i);

    }


}
