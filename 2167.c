#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i;
    int down = 0,num = 0,count = 0;
    for(i = 1; i <= n; i++ )
    {
        int speed;
        scanf("%d",&speed);

        if(speed < down && count == 0)
        {
            num = i;
            count++;
        }

        down = speed;
    }

    printf("%d\n",num);



    return 0;
}
