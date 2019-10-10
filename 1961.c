#include <stdio.h>
#include <math.h>

int main()
{
    int p,n;
    scanf("%d%d",&p,&n);

    int ph[n],i;
    for(i = 0; i < n; i++)
        scanf("%d",&ph[i]);

    for(i = 0; i < n-1; i++)
    {
        if(abs(ph[i] - ph[i+1]) > p)
        {
            printf("GAME OVER\n");
            break;
        }
    }

    if(i == (n-1))
        printf("YOU WIN\n");



    return 0;
}
