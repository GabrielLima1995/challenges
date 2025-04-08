#include<stdio.h>
int hi,hf,mi,mf,h,m;


int main()

{


  scanf("%d %d %d %d",&hi,&mi,&hf,&mf);

   tempo();

   if (h ==0 && m == 0)
    h=24;


  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    return 0;
}

tempo()

  { int min;
  min=hf*60+mf-hi*60-mi;

  if ( min < 0 )
    min=1440-60*hi+mf-mi+60*hf;

  h=min/60;

  m=(min%60);


  }
