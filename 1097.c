#include <stdio.h>

int main()
{
    int i = 1, j = 7,k = 0;

    for(j; ; j--)
    {
        printf("I=%d J=%d\n",i,j);

        k++;
            if(k == 3)
            {
                i += 2;
                j = i + 7;
                k = 0;
            }
            if(i == 11)
                break;
    }

    return 0;
}
