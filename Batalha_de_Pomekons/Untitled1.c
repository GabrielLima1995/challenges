#include<stdio.h>

int main ()
{
    int t,b,ad,dd,ld,ag,dg,lg,i,rd=0,rg=0;
    double vg,vd;

    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
        scanf("%d",&b);

        scanf("%d%d%d",&ad,&dd,&ld);
        scanf("%d%d%d",&ag,&dg,&lg);

        if ((ld%2)== 0)
            rd=b;
        vd=(double)(ad+dd)/2+rd;

        if ((lg%2)== 0)
            rg=b;
        vg=(double)(ag+dg)/2+rg;

        if (vg > vd)
            printf("Guarte\n");
        else
        if (vd > vg)
            printf("Dabriel\n");
        else
            printf("Empate\n");

        rd=0;rg=0;

    }


    return 0;
}
