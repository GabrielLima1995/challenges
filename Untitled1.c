#include<stdio.h>

int main()

{ int w1,w2,r,i=0;
 float rm1,rm2,m,mf=0.0,h;
 scanf("%d %d %d",&w1,&w2,&r);
while ( w1 != 0 && w2 != 0 && r != 0)

{
     rm1=(float)w1*(1.0+r/30.0);
     rm2=(float)w2*(1.0+r/30.0);
     m=(rm1+rm2)/2;

    if (m >= 1.0 && m < 13.0)
        printf("Nao vai da nao\n");
    else
    if (m >= 13.00 && m < 14.00)
        printf("E 13\n");
    else
    if (m >= 14.00 && m < 40.00)
        printf("Bora, hora do show! BIIR!\n");
    else
     if (m >=40.00 && m <= 60.00)
        printf("Ta saindo da jaula o monstro!\n");
    else
    if (m > 60.00)
        printf("AQUI E BODYBUILDER!!\n");


        i=i+1;
        mf+=m;

    scanf("%d %d %d",&w1,&w2,&r);


}

h=(float)(mf/i);

if (h > 40.00)

    printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");

 return 0;
}
