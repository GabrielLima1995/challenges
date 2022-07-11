#include<stdio.h>

int main ()

{
    char ch[10];
    double salario,comissao;

   scanf("%s",ch);

   scanf("%lf %lf",&salario,&comissao);

   printf("TOTAL = R$ %.2lf",salario+comissao*0.15);


    return 0;
}
