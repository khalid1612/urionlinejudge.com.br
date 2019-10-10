#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    float price[5] = {1.50,2.50,3.50,4.50,5.50};
    float total = 0.0;

    while(t--)
    {
        int a,b;

        scanf("%d%d",&a,&b);
        int find = a%1000;
        total += price[find - 1] * b;
    }

    printf("%.2f\n",total);

    return 0;
}
