#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d",&a);

    if(a % 2 == 0)
        a += 1;

    for(b = 1; b < 7; b++){
        printf("%d\n",a);
        a += 2;
    }

    return 0;
}
