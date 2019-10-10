#include <stdio.h>

int main()
{
    int a = 100,high = 0,pos = 0;

    while(a--)
    {
        int b;
        scanf("%d",&b);

        if(b > high){
            high = b;
            pos = 100 - a;
        }
    }

    printf("%d\n%d\n",high,pos);

    return 0;
}
