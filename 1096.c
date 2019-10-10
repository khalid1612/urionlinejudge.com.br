#include <stdio.h>

int main()
{
    int i = 1, j = 7;

    for(j; ; j--)
    {
        printf("I=%d J=%d\n",i,j);
        if(j == 5){
            j = 8;
            i += 2;
        }
        if(i == 11)
            break;
    }

    return 0;
}



//submit date 10/6/16
