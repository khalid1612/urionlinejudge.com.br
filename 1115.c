#include <stdio.h>

int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a == 0 || b == 0)
            break;
        else{
            if(a > 0){
                if(b > 0)
                    printf("primeiro\n");
                else
                    printf("quarto\n");
            }
            else{
                if(b < 0)
                    printf("terceiro\n");
                else
                    printf("segundo\n");
            }
        }
    }

    return 0;
}
