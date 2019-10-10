#include <stdio.h>

int main()
{
    unsigned long long int p;
    scanf("%llu",&p);

    while(p != -1)
    {
        if(p == 0)
            printf("0\n");
        else
            printf("%llu\n",p-1ll);

        scanf("%llu",&p);
    }


    return 0;
}
