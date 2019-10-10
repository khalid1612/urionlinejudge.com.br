#include <stdio.h>

int main()
{
    int test;

    while(scanf("%d",&test) != EOF)
    {
        int first = test / 3;

        int i,j;
        for(i = 0; i < first; i++)
        {
            int three = test - i;
            for(j = 0; j < test; j++)
            {
                if(i == j)
                    printf("2");
                else if(j == three-1)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }

        int one = test - (first*2);
        int middle = one / 2 + 1;
        int four  = test / 2;

        for(i = 1; i < one+1; i++)
        {
            for(j = 0; j < test; j++)
            {
                if(i == middle && j == four)
                    printf("4");
                else if(j >= first && j < test - first)
                    printf("1");
                else
                    printf("0");
            }
            printf("\n");
        }

        for(i = first; i > 0 ; i--)
        {
            int two = test - i;
            for(j = 1; j <= test; j++)
            {
                if(i == j)
                    printf("3");
                else if(j == two + 1)
                    printf("2");
                else
                    printf("0");
            }
            printf("\n");
        }

        printf("\n");
    }



    return 0;
}
