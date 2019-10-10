#include <stdio.h>

int main()
{
    int a,b,total = 0;

    scanf("%d %d",&a,&b);

    if(a == b)
        printf("0\n");
    else{
        if(a > b){
            b += 1;
            if(b % 2 == 0)
                b += 1;

            for(b; b < a; b += 2)
                total += b;
            printf("%d\n",total);
        }
        else{
            a += 1;
            if(a % 2 == 0)
                a += 1;

            for(a; a < b; a += 2)
                total += a;
            printf("%d\n",total);
        }
    }


    return 0;

}
