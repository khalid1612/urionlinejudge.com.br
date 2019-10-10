#include <stdio.h>

int main()
{
    int a,count = 0;
    int b;

    for (a = 1; a < 6; a++)
    {
        scanf("%d",&b);
        if(b % 2 == 0)
            count++;
    }
    printf("%d valores pares\n",count);

    return 0;
}

