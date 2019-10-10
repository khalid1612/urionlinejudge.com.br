#include <stdio.h>

int main()
{
    int line;
    scanf("%d",&line);

    int i, j = 1;
    for (i = 1; i <= line; i++)
    {
        printf("%d %d %d PUM\n",j,j+1,j+2);
        j += 4;
    }

    return 0;
}
