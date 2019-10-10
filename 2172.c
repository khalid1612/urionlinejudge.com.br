#include <stdio.h>

int main()
{
    int x;
    long long int m;
    scanf("%d%lld",&x,&m);

    while(x != 0 && m != 0)
    {
        printf("%lld\n",m*x);

        scanf("%d%lld",&x,&m);
    }

    return 0;
}
