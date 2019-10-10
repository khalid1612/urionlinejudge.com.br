#include <stdio.h>

int main()
{
    int a,count = 0;
    float b;

    for (a = 1; a < 7; a++)
    {
        scanf("%f",&b);
        if(b > 0)
            count++;
    }
    printf("%d valores positivos\n",count);

    return 0;
}

