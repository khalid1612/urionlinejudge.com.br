#include <stdio.h>

int main()
{
    int n,cas = 1;

    while(scanf("%d",&n) != EOF)
    {
        int sum = 1,i,j;
        for(i  = 1; i <= n; i++)
            sum += i;
        if(n == 0)
            printf("Caso %d: %d numero\n0\n\n",cas,sum);
        else
        {
            printf("Caso %d: %d numeros\n0",cas,sum);
            for(j = 0; j <= n; j++)
            {
                for(i = 0; i < j; i++)
                    printf(" %d",j);
            }
            printf("\n\n");
        }
        cas++;
    }

    return 0;
}
