#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    float total_s = 0;
    float total_b = 0;
    float total_a = 0;

    float total_succes_s = 0;
    float total_succes_b = 0;
    float total_succes_a = 0;

    while(n--)
    {
        char name[50];
        scanf("%s",name);

        float s,b,a;

        scanf("%f%f%f",&s,&b,&a);
        total_s += s;
        total_b += b;
        total_a += a;

        scanf("%f%f%f",&s,&b,&a);
        total_succes_s += s;
        total_succes_b += b;
        total_succes_a += a;
    }

    float per_s = (total_succes_s * 100) / total_s;
    float per_b = (total_succes_b * 100) / total_b;
    float per_a = (total_succes_a * 100) / total_a;

    printf("Pontos de Saque: %.2f %%.\n",per_s);
    printf("Pontos de Bloqueio: %.2f %%.\n",per_b);
    printf("Pontos de Ataque: %.2f %%.\n",per_a);

    return 0;
}
