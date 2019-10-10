#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    while(a--)
    {
        int d;
        scanf("%d",&d);

        if(d == 0)
            printf("NULL\n");
        else if(d > 0){
            if(d % 2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else{
            if(d % 2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }


    return 0;
}
