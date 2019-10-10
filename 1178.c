#include <stdio.h>

int main()
{
    double n;

    scanf("%lf",&n);

    printf("N[%d] = %.4lf\n", 0, n);

    int i;
    for( i = 1; i < 100; i++){
        n = n/2.0;
        printf("N[%d] = %.4lf\n",i,n);
    }
    return 0;
}
