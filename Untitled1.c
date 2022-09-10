#include<stdio.h>
#include<math.h>

int main ()
{
    int a,b,c,d;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    if ((a> abs(b-c)&&a<(b+c))&&(b > abs(a-c)&& b <(a+c))&&(c> abs(a-b)&&c<(b+a)))
        printf("S\n");
    else
    if ((a> abs(d-c)&&a<(d+c))&&(d> abs(a-c)&&d<(a+c))&&(c > abs(a-d)&&c<(d+a)))
        printf("S\n");
    else
    if ((d> abs(b-c)&&d<(b+c))&&(b> abs(d-c)&&b<(d+c))&&(c > abs(d-b)&&c<(b+d)))
        printf("S\n");
    else
     if ((d> abs(b-a)&&d<(b+a))&&(b> abs(d-a)&&b<(d+a))&&(a > abs(d-b)&&a<(b+d)))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
