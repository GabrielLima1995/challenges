#include<stdio.h>

int main ()

{
    char v[51],d[51],e[51];
    int i,n,aux;

    scanf("%s",&v);

    n=strlen(v);

    for(i=0,aux=0;i<n;i++)
    {
        if ((v[i] == 'a') || (v[i] == 'e') || (v[i] == 'i') || (v[i] == 'o') || (v[i] == 'u') )
            {
                d[aux] = v[i];
                aux++;
            }
    }

      for(i=(n-1),aux=0;i>=0;i--)
    {
        if ((v[i] == 'a') || (v[i] == 'e') || (v[i] == 'i') || (v[i] == 'o') || (v[i] == 'u') )
            {
                e[aux] = v[i];
                aux++;
            }
    }

   if (strncmp(e,d,aux) == 0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
