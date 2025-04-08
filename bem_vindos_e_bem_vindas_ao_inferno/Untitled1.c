#include<stdio.h>
#include<math.h>

int main ()

{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

        if (b<a && b<=c)
        printf(":)\n");
    else
        if (a<b && b>= c)
        printf (":(\n");
    else
        if (a<b && b<c && abs(b-a)>abs(c-b))
        printf (":(\n");
    else
        if (a<b && b<c && abs(c-b)>= abs(b-a))
        printf (":)\n");
    else
        if (a>b && b>c && abs(b-c)<abs(a-b))
        printf (":)\n");
    else
        if (a>b && b>c && abs(b-c)>=abs(a-b))
        printf (":(\n");
    else
        if (a==b && b<c)
        printf (":)\n");
    else
        printf (":(\n");

    return 0;
}
