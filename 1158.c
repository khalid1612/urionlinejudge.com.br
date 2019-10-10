#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int i;
        if(x%2 == 0)
            x += 1;

        int total = 0;
        for(i = 1; i <= y; i++,x+=2){
            total += x;
        }
        printf("%d\n",total);
    }

    return 0;
}
