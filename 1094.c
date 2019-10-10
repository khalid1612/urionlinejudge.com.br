#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    int total = 0;
    int c = 0, r = 0, s = 0;

    while(a--)
    {
        int b;
        char d;

        scanf("%d %c",&b,&d);

        total += b;

        if(d == 'C')
            c += b;
        else if(d == 'R')
            r += b;
        else
            s += b;
    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",100.00 / total * c);
    printf("Percentual de ratos: %.2f %%\n",100.00 / total * r);
    printf("Percentual de sapos: %.2f %%\n",100.00 / total * s);


    return 0;
}
