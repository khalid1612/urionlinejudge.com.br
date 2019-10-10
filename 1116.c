#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    while(a--)
    {
        float b,c;
        scanf("%f %f",&b,&c);

        if(b == 0)
            printf("0.0\n");
        else if(c == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",b/c);

    }

    return 0;
}
