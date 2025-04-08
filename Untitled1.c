#include <stdio.h>
int main()
{
    long double x;
    scanf("%lE",&x);
    printf("%+.4lE\n",x);
    return 0;
}
