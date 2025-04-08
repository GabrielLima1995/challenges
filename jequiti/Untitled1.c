#include<stdio.h>
#include<string.h>

int main ()
{
    int i,j,n,k,var,var2;
    char jequiti[16];
    char jequiti2[16];
    char nome1[16];
    char nome2[16];
    char c;

    scanf("%d",&i);
    fflush(stdin);

  for (j=0;j<i;j++)
    {
    gets(nome1);
    fflush(stdin);
    gets(nome2);
    fflush(stdin);
    gets(jequiti);
    n = strlen(jequiti);

    for(k=0,var=0,var2=0;k<(n);k++)
    {
        if (jequiti[k] == '_')
        {
            var2++;
            c=nome1[k];
            if (c == nome2[k])
            var++;
        }
    }
     if ((var2-var) == 1)
        printf("N\n");
     else
        printf("Y\n");

    }
    return 0;
}
