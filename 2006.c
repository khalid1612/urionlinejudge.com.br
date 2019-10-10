#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int match = 0,i,a;
    for(i = 0;i < 5; i++)
    {
        scanf("%d",&a);
        if(a == t)
            match++;
    }

    printf("%d\n",match);

    return 0;
}
