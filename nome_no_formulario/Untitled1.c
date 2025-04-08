#include<stdio.h>

int main()
{
    char c[501];

    gets(c);

 if (strlen(c) <= 80)
     printf("YES\n");
 else
    printf("NO\n");


    return 0;
}
