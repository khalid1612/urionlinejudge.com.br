#include <stdio.h>

int main()
{
    int v;
    scanf("%d",&v);

    int x[10];

    int i,j;
    for(i = 0,j = v; i < 10; i++, j *= 2)
    {
        x[i] = j;
    }

    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;
}
