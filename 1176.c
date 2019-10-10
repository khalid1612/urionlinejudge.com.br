#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        unsigned long long int store[n];

        store[0] = 0;
        store[1] = 1;

        int i = 0;
        for(i = 2; i <= n; i++){
            store[i] = store[i-1] + store[i-2];
        }

        printf("Fib(%d) = %lld\n",n,store[n]);


    }

    return 0;
}
