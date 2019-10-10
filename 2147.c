#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char s[10000];
        scanf("%s",s);
        printf("%.2lf\n",strlen(s)*.01);
    }

    return 0;
}
