#include<stdio.h>

int main ()
{
    float t,j=101.00;

    int i,m,flag=0;

    for(i=0;i<3;i++)
    {
      scanf("%f",&t);

      if (t == j)
        flag++;

      if (t < j)
      {
          j=t;
          m=i;
      }
    }

    if (m == 0 && flag == 0)
        printf("Otavio\n");
    else
    if (m == 1 && flag == 0)
        printf("Bruno\n");
    else
    if (m == 2 && flag == 0)
        printf("Ian\n");
    else
       printf("Empate\n");





    return 0;
}
