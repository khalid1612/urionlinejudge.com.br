#include <stdio.h>

int main()
{
    float a,total = 0;
    int count = 0;

    while(1)
    {
        if(count == 2){
            printf("media = %.2f\n",total/2.0);
            printf("novo calculo (1-sim 2-nao)\n");

            while(1)
            {
                int b;

                scanf("%d",&b);

                if(b == 1){
                    count = 0;
                    total = 0;
                    break;
                }
                else if(b == 2){
                    exit(0);
                }
                else{
                    printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }


        scanf("%f",&a);


        if(a > 10 || a < 0)
            printf("nota invalida\n");
        else{
            total += a;
            count++;
        }

    }


    return 0;
}
