#include <stdio.h>

int main()
{
    int bill[6] = {2,5,10,20,50,100};
    int possible_paid[15];

    int i,j,k = 0;
    for(i = 0; i < 6; i++)
    {
        for(j = i+1; j < 6; j++)
        {
            if(i != j)
            {
                possible_paid[k] = bill[i]+bill[j];
                k++;
            }
        }
    }

    int n,m;
    scanf("%d%d",&n,&m);

    while(n != 0 && m!= 0)
    {
        int paid = m - n;
        int im = 0;

        int i;
        for(i = 0;  i < 15; i++)
        {
            if(possible_paid[i] == paid)
            {
                printf("possible\n");
                im++;
                break;
            }
        }

        if(im == 0)
            printf("impossible\n");

        scanf("%d%d",&n,&m);
    }

    return 0;
}
