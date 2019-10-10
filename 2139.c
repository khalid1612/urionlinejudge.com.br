#include <stdio.h>

int main()
{
    int m,d;

    while(scanf("%d%d",&m,&d) != EOF)
    {
        if(m == 12)
        {
            if(d == 24)
                printf("E vespera de natal!\n");
            else if(d ==  25)
                printf("E natal!\n");
            else if(d > 25)
                printf("Ja passou!\n");
            else
                printf("Faltam %d dias para o natal!\n",25-d);
        }
        else
        {

            int e;
            if(m == 2 )
                e = 29;
            else if(m == 4 || m == 6 || m == 9 || m == 11)
                e = 30;
            else
                e = 31;



            int ex_day = 0;

            if(m == 1 || m == 3 || m == 4)
                ex_day = 4;
            else if(m == 2)
                ex_day = 5;
            else if(m == 5 || m == 6)
                ex_day = 3;
            else if(m == 7)
                ex_day = 2;
            else if(m == 8 || m == 9)
                ex_day = 1;


            int day = (((12-(m+1))*30)+25)+(e-d);

            printf("Faltam %d dias para o natal!\n",day+ex_day);
        }
    }

    return 0;
}
