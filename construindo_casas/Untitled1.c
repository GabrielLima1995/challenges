#include<stdio.h>
#include<math.h>

int main ()

{
    int a,b,c,area,terreno;
    scanf ("%d",&a);
    while(a != 0)

    {  scanf("%d %d",&b,&c);
        area=a*b;
        terreno=sqrt(area*100/c);

        printf("%d\n",terreno);


    scanf ("%d",&a);
    }

    return 0;
}
