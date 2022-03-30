#include<stdio.h>

int main ()

{
    int n,i,q,t=0,r=0,c=0,s=0;
    char ch;
    float pc,pr,ps;

    scanf("%d",&n);

    for (i=0;i<n;i++)

    {
        scanf("%d %c",&q,&ch);
        t+=q;

        if (ch == 'R')
            r+=q;
        if (ch == 'C')
            c+=q;
        if (ch == 'S')
            s+=q;

    }

    pc=(float)c/t*100;
    pr=(float)r/t*100;
    ps=(float)s/t*100;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);

    return 0;
}
