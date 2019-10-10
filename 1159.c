#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    while(x != 0){
        int i;
        if(x%2 != 0)
            x += 1;

        int total = 0;
        for(i = 1; i <= 5; i++,x+=2){
            total += x;
        }
        printf("%d\n",total);
        scanf("%d",&x);
    }

    return 0;
}

