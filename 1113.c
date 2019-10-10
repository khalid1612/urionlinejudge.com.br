#include <stdio.h>

int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a == b)
            break;
        else{
            if(a > b)
                printf("Decrescente\n");
            else
                printf("Crescente\n");
        }
    }

    return 0;
}

