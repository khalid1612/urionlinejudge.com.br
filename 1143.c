#include <stdio.h>

int main()
{
    int line;
    scanf("%d",&line);

    int i;
    for (i = 1; i <= line; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }

    return 0;
}

