#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    int b = 2;

    for(b; b < 10000; b += a )
        printf("%d\n",b);



    return 0;
}
