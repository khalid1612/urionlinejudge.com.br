#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        float food;
        scanf("%f",&food);

        int count = 0;

        while(food > 1.0)
        {
            food /= 2;
            count++;
        }
        printf("%d dias\n",count);
    }

    return 0;
}
