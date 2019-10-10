#include <stdio.h>

int main()
{
    float b;
    int rem ;

    scanf("%f",&b);

    int a = b ;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a / 100);
    rem = a % 100;

    printf("%d nota(s) de R$ 50.00\n",rem / 50);
    rem %= 50;

    printf("%d nota(s) de R$ 20.00\n",rem / 20);
    rem %= 20;

    printf("%d nota(s) de R$ 10.00\n",rem / 10);
    rem %= 10;

    printf("%d nota(s) de R$ 5.00\n",rem / 5);
    rem %= 5;

    printf("%d nota(s) de R$ 2.00\n",rem / 2);

    float c = b-a;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",rem % 2);

    if(c > .50){
        printf("1 moeda(s) de R$ 0.50\n");
        c -= .50;
    }
    else
        printf("0 moeda(s) de R$ 0.50\n");

    if(c > .25){
        printf("1 moeda(s) de R$ 0.25\n");
        c -= .25;
    }
    else
        printf("0 moeda(s) de R$ 0.25\n");

    if(c > .10)
    {
        c -= .10;
        if(c < .10)
            printf("1 moeda(s) de R$ 0.10\n");
        else{
            printf("2 moeda(s) de R$ 0.10\n");
            c -= .10;
        }
    }
    else
        printf("0 moeda(s) de R$ 0.10\n");

    if(c > .05){
        printf("1 moeda(s) de R$ 0.05\n");
        c -= .05;
    }
    else
        printf("0 moeda(s) de R$ 0.05\n");


    if(c < .05 && c > 0.00)
        printf("%.0f moeda(s) de R$ 0.01\n",c*100);
    else
        printf("0 moeda(s) de R$ 0.01\n");



    return 0;
}
