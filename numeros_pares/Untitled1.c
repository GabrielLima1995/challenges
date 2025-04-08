#include<stdio.h>

int main()

{
    int i=1,a;

    while (i <= 100)

    {  a=i%2;

        if (a == 0)
            printf("%d\n",i);


        i++;
    }

    return 0;

}
