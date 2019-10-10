#include <stdio.h>

int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a <= 0 || b <= 0)
            break;
        else{
            int total = 0;
            if(a > b){
                for(b; b <= a; b++){
                    total += b;
                    printf("%d ",b);
                }
                printf("Sum=%d\n",total);
            }
            else{
                for(a; a <= b; a++){
                    total += a;
                    printf("%d ",a);
                }
                printf("Sum=%d\n",total);
            }
        }
    }

    return 0;
}
