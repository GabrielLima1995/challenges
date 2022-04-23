#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];

     gets(a);

      while (strcmp(a,"2002")!= 0)

    {
        printf("Senha Invalida\n");
        gets(a);
    }
        printf("Acesso Permitido\n");





    return 0;
}
