#include<stdio.h>
#include<math.h>

int main ()
{
    int t,i,n,j,res=0;

    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(j=0,res=0;j<n;j++)
        {
            res+=pow(2,j);
        }
        printf("%d\n",res);

    }
    return 0;
}
