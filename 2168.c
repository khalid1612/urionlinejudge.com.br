#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int area[n+1][n+1];

    int i,j;
    for(i = 0; i < n+1; i++)
        for(j = 0; j < n+1; j++)
            scanf("%d",&area[i][j]);


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            int safe = 0;
            if(area[i][j] == 1)
                safe++;
            if(area[i][j+1] == 1)
                safe++;
            if(area[i+1][j] == 1)
                safe++;
            if(area[i+1][j+1] == 1)
                safe++;

            if(safe >= 2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }




    return 0;
}
