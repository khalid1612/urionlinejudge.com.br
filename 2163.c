#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int val[n][m];

    int i,j;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d",&val[i][j]);


    int count = 0;

    for(i = 1; i < n-1; i++)
    {
        for(j = 1; j < m - 1; j++)
        {
            if(val[i][j] == 42)
            {
                if(val[i][j-1] == 7 && val[i][j+1] == 7)
                {
                    if(val[i-1][j-1] == 7 && val[i-1][j] == 7 && val[i-1][j+1] == 7)
                    {
                        if(val[i+1][j-1] == 7 && val[i+1][j] == 7 && val[i+1][j+1] == 7)
                        {
                            printf("%d %d\n",i+1,j+1);
                            count++;
                        }
                    }
                }
            }
        }
    }

    if(count == 0)
        printf("0 0\n");


    return 0;
}
