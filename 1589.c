#include <stdio.h>

int main()
{
    int test,i;
    scanf("%d",&test);

    for(i = 1; i <= test; i++)
    {
        int r1,r2;
        scanf("%d%d",&r1,&r2);
        printf("%d\n",r1+r2);
    }

    return 0;
}
