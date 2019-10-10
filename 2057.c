#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int time = a+b+c;
    if(c < 0)
        time = abs(24-abs(time));

    printf("%d\n",time%24);

    return 0;
}
