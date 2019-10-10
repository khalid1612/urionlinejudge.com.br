#include <stdio.h>

int main()
{
    int m,n,i;

    long long int firstTotal;
    long long int secondTotal;

    while(scanf("%d %d",&m,&n) != EOF)
    {
        firstTotal = 1;
        secondTotal = 1;


        for(i = m; i > 0; i--)
            firstTotal *= i;

        for(i = n; i >0 ; i--)
            secondTotal *= i;


        printf("%lld\n",firstTotal+secondTotal);
    }

    return 0;
}
