#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    double total = 0.0;

    while(n--)
    {
        total += 2;
        total = 1.0/total;
    }

    printf("%.10lf\n",total+1);

    return 0;
}
