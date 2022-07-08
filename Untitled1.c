#include<stdio.h>

int main ()

{
    long long int a,i,count=0;

    scanf("%lld",&a);

    for (i=(a-2);i>=2;i--)
    {
        count+=i;
    }
    printf("%lld\n",count);

    return 0;
}
