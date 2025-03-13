#include<stdio.h>

int main()
{

    int r=1,g,i,j=0,vi=0,e=0,di=0;



    while (r == 1)

    {
        j++;
        scanf("%d %d",&i,&g);
        if (i > g)
           vi++;
        else
        if (i < g)
            di++;
        else
        if (i==g)
          e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&r);
    }
        printf("%d grenais\n",j);
        printf("Inter:%d\n",vi);
        printf("Gremio:%d\n",j-vi-e);
        printf("Empates:%d\n",e);

        if (vi > (j-vi-e))
            printf("Inter venceu mais\n");
        else
        if (vi < (j-vi-e) )
            printf("Gremio venceu mais\n");
        else
        if (vi == (j-vi-e))
            printf("Nao houve vencedor\n");

    return 0;
}
