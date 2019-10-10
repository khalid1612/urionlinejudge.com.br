#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int b,a,d,l;

        scanf("%d%d%d%d",&b,&a,&d,&l);
        float da;
        if(l % 2 == 0)
            da = (a+d)/2 +b;
        else
            da = (a+d)/2;

        scanf("%d%d%d",&a,&d,&l);
        float gu;
        if(l % 2 == 0)
            gu = (a+d)/2 +b;
        else
            gu = (a+d)/2;

        if(da > gu)
            printf("Dabriel\n");
        else if(da < gu)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }


    return 0;
}
