#include <stdio.h>

void display(float b,int d);


int main()
{
    float a;

    scanf("%f",&a);

    if(a >= 0 && a <= 400){
        display(a,15);
    }
    else if(a > 400 && a <= 800){
        display(a,12);
    }
    else if(a > 800 && a <= 1200){
        display(a,10);
    }
    else if(a > 1200 && a <= 2000){
        display(a,7);
    }
    else
        display(a,4);


    return 0;
}

void display(float b,int d)
{
    float y = (b * d) / 100;
    float x = y + b;

    printf("Novo salario: %.2f\n",x);
    printf("Reajuste ganho: %.2f\n",y);
    printf("Em percentual: %d %%\n",d);
}

