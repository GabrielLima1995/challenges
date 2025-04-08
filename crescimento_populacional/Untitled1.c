#include<stdio.h>

int main ()
{

    int t,i,pa,pb,j=0;
    float ga,gb;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
       scanf("%d %d %f %f",&pa,&pb,&ga,&gb);

        while(pb >= pa )

        {
            pa=((ga*pa)/100)+pa;
            pb=((gb*pb)/100)+pb;

            j++;

            if (j > 100)
                break;
        }
        if (j > 100)
            printf("Mais de 1 seculo.\n");
        else
        printf("%d anos.\n",j);
        j=0;
    }
    return 0;
}
