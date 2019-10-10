#include <stdio.h>

int main()
{
    int i;
    float total = 0;

    for(i = 1; i <= 100; i++)
    {
        total += (1.00/i);
    }

    printf("%.2f\n",total);

    return 0;
}
