#include <stdio.h>

int main()
{
    float a,total = 0;
    int count = 0;

    while(1)
    {
        if(count == 2)
            break;

        scanf("%f",&a);


        if(a > 10 || a < 0)
            printf("nota invalida\n");
        else{
            total += a;
            count++;
        }

    }

    printf("media = %.2f\n",total/2.0);



    return 0;
}
