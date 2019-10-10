#include <stdio.h>

int main()
{
    double t, sqt = 0.0;
    scanf("%lf",&t);
    while(t--)
    {
        sqt+=6.0;
        sqt = 1.0/sqt;
    }
    sqt += 3.0;
    printf("%.10lf\n",sqt);

    return 0;
}
