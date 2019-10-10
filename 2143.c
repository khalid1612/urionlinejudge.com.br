#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        while(t--)
        {
            int n;
            scanf("%d",&n);
            if(n % 2 == 1)
                printf("%d\n",n*2-1);
            else
                printf("%d\n",n*2-2);
        }
        scanf("%d",&t);
    }

    return 0;
}
