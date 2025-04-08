#include<stdio.h>

int main ()

{
    int i,r,somam,somal,cm,vm,cl,vl,mm=1000,ll=1000;
    scanf("%d",&r);
    while(r != 0)
    {
       int m[r],l[r];

       for (i=0;i<r;i++) scanf("%d",&m[i]);

       for (i=0;i<r;i++) scanf("%d",&l[i]);

       for (i=0,somam=0;i<r;i++) somam+=m[i];

       for (i=0,somal=0;i<r;i++) somal+=l[i];

       for (i=1,vm=0,cm=0;i<r;i++)
       {
           if (m[i]==m[i-1] && vm == 0) cm++;
           else
            if (m[i]!=m[i-1] && vm == 0) cm=0;
           if (cm==2 && vm == 0)
           {
               vm=1;
               mm=i;
           }
       }

       for (i=1,vl=0,cl=0;i<r;i++)
       {
           if (l[i]==l[i-1] && vl==0) cl++;
           else
            if (m[i]!=m[i-1] && vl == 0) cl=0;
           if (cl==2 && vl==0)
           {
               vl=1;
               ll=i;
           }
       }

      if (ll < mm ) somal+=30;
      if (ll > mm ) somam+=30;

    if (somal > somam) printf("L\n");
        else
    if (somam > somal) printf("M\n");
        else
    if (somam == somal) printf("T\n");

    printf("%d M ,%d l",somam,somal);

      scanf("%d",&r);
      mm=1000;ll=1000;
    }

    return 0;
}
