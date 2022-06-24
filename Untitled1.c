#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j=0;/*i/n*/
    float s=0.0;

    for (i=1,n=1;i<=39;i+=2,n=pow(2,j))
    {
        s+=(float)i/n;
        j++;
    }

    printf("%.2f\n",s);



    return 0;
}
