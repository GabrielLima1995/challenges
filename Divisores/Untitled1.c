#include<stdio.h>
#include<math.h>

int main()

{
    int a,b,c,d,i=0,x=0;

    scanf("%d%d%d%d",&a,&b,&c,&d);

     while(1)
     {
         if (((i%a)==0) && ((i%b)!= 0) && ((c%i)==0)&& ((d%i)!=0))
        {
            printf("%d\n",i);
            break;
        }
        else
         {
             x++;
             i+=a;

         }
        if (x>sqrt(c))
        {
            printf("-1\n");
            break;
        }
     }

    return 0;
}
