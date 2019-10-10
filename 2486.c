#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int total = 0;
        while(t--)
        {
            int n;
            scanf("%d",&n);
            getchar();
            char name[20];
            gets(name);

            int c_amount;
            if(name[0] == 's')
                c_amount = 120;
            else if(name[0] == 'g')
                c_amount = 70;
            else if(name[0] == 'l')
                c_amount = 50;
            else if(name[0] == 'b')
                c_amount = 34;
            else{
                if(name[2] == 'n')
                    c_amount = 56;
                else
                    c_amount = 85;
            }
            total += n * c_amount;
        }

        if(total >= 110 && total <= 130)
            printf("%d mg\n",total);
        else if(total < 110)
            printf("Mais %d mg\n",110-total);
        else
            printf("Menos %d mg\n",total-130);


        scanf("%d",&t);
    }

    return 0;
}
