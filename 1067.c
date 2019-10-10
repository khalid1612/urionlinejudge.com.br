#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    int b;

    for(b = 1; b <= a; b += 2)
    {
        printf("%d\n",b);
    }

    return 0;
}
