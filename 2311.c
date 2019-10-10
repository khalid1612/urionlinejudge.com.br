#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char name[50];
        scanf("%s",name);

        float d;
        scanf("%f",&d);

        float score[7];
        int i;
        for(i = 0; i < 7; i++)
            scanf("%f",&score[i]);

        float big = score[0];
        float small = score[0];

        for(i = 1; i < 7; i++)
        {
            if(score[i] > big)
                big = score[i];
            if(score[i] < small)
                small = score[i];
        }

        float total = 0;

        for(i = 0; i < 7; i++)
        {
            if(score[i] == big || score[i] == small)
            {
                continue;
            }
            else
                total += score[i];
        }


        printf("%s %.2f\n",name,total*d);

    }
}
