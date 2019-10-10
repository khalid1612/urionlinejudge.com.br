#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    double a = pow((1+sqrt(5))/2,n);
    double b = pow((1-sqrt(5))/2,n);

    printf("%.1lf\n",(a-b) / sqrt(5));

    return 0;
}
