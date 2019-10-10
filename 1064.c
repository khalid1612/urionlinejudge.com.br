#include <stdio.h>

int main()
{
    int a,count = 0;
    float b,total = 0;

    for (a = 1; a < 7; a++)
    {
        scanf("%f",&b);
        if(b > 0)
        {
            count++;
            total += b;
        }

    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",total / count);

    return 0;
}


