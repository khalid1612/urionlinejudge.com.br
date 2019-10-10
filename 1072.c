#include <stdio.h>

int main()
{
    int c,in = 0;

    scanf("%d",&c);

    int d = c;

    while(c--)
    {
        int d;
        scanf("%d",&d);

        if(d >= 10 && d <= 20)
            in++;
    }

    printf("%d in\n",in);
    printf("%d out\n",d - in);


    return 0;
}
