#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    while(a--)
    {
        int b,c,total = 0;
        scanf("%d %d",&b,&c);

        int d = b - c;

        if(d == 0 || d == 1 || d == -1)
            printf("0\n");
        else{
            if(b > c){
                for(c += 1; c < b; c++ ){
                    if(c % 2 != 0)
                        total += c;
                }
                printf("%d\n",total);
            }
            else{
                for(b += 1; b < c; b++ ){
                    if(b % 2 != 0)
                        total += b;
                }
                printf("%d\n",total);
            }
        }
    }
}
