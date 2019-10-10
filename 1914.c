#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char a[100],c1[10],b[100],c2[10];
        long long int d,e;

        scanf("%s%s%s%s",a,c1,b,c2);
        scanf("%lld %lld",&d,&e);

        if(c1[0] == 'P')
        {
            if((d+e) % 2 == 0)
                printf("%s\n",a);
            else
                printf("%s\n",b);
        }
        else
        {
            if((d+e) % 2 == 0)
                printf("%s\n",b);
            else
                printf("%s\n",a);
        }

    }

    return 0;
}
