#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    while(y <= x){
        scanf("%d",&y);
    }

    int total = 0;
    int count = 0;

    for(x; total < y; x++){
        total += x;
        count++;
    }

    printf("%d\n",count);



    return 0;
}

