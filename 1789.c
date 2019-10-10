#include <stdio.h>

int h_level(int temp,int high)
{
    if(temp > high)
        high = temp;
    return high;
}

int main()
{
    int i,n;
    while(scanf("%d",&n) != EOF)
    {
        int high = 0,temp;
        for(i = 1; i <= n; i++)
        {
            int a;
            scanf("%d",&a);
            if(a < 10)
            {
                temp = 1;
                high = h_level(temp,high);
            }
            else if(a >= 10 && a < 20)
            {
                temp = 2;
                high = h_level(temp,high);
            }
            else
            {
                temp = 3;
                high = h_level(temp,high);
            }
        }
        printf("%d\n",high);

    }

    return 0;
}



