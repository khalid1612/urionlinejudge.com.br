#include <stdio.h>

int main()
{
    float i = 1.00,j = 1.00;
    float sum = 0;

    for(i,j; i <= 39; i+=2,j+=j){
        sum += (i / j);
    }
    printf("%.2f\n",sum);

    return 0;
}
