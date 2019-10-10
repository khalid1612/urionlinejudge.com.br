#include <stdio.h>

int main()
{
    int a,b,total = 0;

    scanf("%d %d",&a,&b);

    if(a > b){
        for(b; b <= a; b++){
            if(b % 13 != 0)
                total += b;
        }
    }
    else{
        for(a; a <= b; a++){
            if(a % 13 != 0)
                total += a;
        }
    }

    printf("%d\n",total);

    return 0;
}
