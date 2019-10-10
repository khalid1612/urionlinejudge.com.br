#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    while(a--)
    {
        float b,c,d;
        scanf("%f %f %f",&b,&c,&d);
        printf("%.1f\n",((b*2)+(c*3)+(d*5))/10);
    }

    return 0;
}
