#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    while(a--)
    {
        int b;
        scanf("%d",&b);

        if(b % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
