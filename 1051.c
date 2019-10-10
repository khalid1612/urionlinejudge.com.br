#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int store[n];

    store[0] = 0;
    store[1] = 1;

    int i;

    for(i = 2; i < n; i++){
        store[i] = store[i-1] + store[i-2];
    }
    for(i = 0; i < n-1; i++){
        printf("%d ",store[i]);
    }
    printf("%d\n",store[i]);



    return 0;
}
