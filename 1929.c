#include <stdio.h>

int main()
{
    int num[4];
    int i,j;
    for(i = 0; i < 4; i++)
        scanf("%d",&num[i]);

    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }

        }
    }


    if(num[0] + num[1] > num[2])
        printf("S\n");
    else if(num[1] + num[2] > num[3])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
