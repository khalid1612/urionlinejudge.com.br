#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t != 9999)
    {
        printf("%d\n",t-1);
        scanf("%d",&t);
    }
    printf("9998\n");

    return 0;
}
