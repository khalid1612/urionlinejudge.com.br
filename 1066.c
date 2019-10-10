#include <stdio.h>

int main()
{
    int a,count = 0,pos = 0;
    int b,zero = 0;

    for (a = 1; a < 6; a++)
    {
        scanf("%d",&b);
        if(b == 0){
            zero++;
            count++;
        }
        else{
            if(b % 2 == 0)
                count++;
            if(b > 0)
                pos++;
        }
    }
    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",5 - count);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",5 - pos - zero);

    return 0;
}

