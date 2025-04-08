 #include <stdio.h>

int main ()

{
    double n;
    int i,j;
    scanf("%lf",&n);
    i=(int)n;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",i/100);
    printf("%d nota(s) de R$ 50.00\n",(i%100)/50);
    printf("%d nota(s) de R$ 20.00\n",((i%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n",(((i%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n",((((i%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n",(((((i%100)%50)%20)%10)%5)/2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(((((i%100)%50)%20)%10)%5)%2);
    j=(int)((n-i)*100);
    printf("%d moeda(s) de R$ 0.50\n",(j/50));
    printf("%d moeda(s) de R$ 0.25\n",(j%50)/25);
    printf("%d moeda(s) de R$ 0.10\n",((j%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n",(((j%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n",(((j%50)%25)%10)%5);

    return 0;
}
