#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    int big,md,small;

    if(a > b){
        if(a > c)
            big = a;
        else
            big = c;
    }
    else{
        if(b > c)
            big = b;
        else
            big = c;
    }

    if(big == a){
        if(b > c){
            md = b;
            small = c;
        }
        else{
            md = c;
            small = b;
        }
    }
    else if(big == b){
        if(a > c){
            md = a;
            small = c;
        }
        else{
            md = c;
            small = a;
        }
    }
    else{
        if(a > b){
            md = a;
            small = b;
        }
        else{
            md = b;
            small = a;
        }
    }


    printf("%d\n%d\n%d\n\n",small,md,big);
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
