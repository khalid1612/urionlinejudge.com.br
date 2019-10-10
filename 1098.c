#include <stdio.h>

int main()
{
    float i,j = 1,k = 3;

    for(i = 0; i < 2.1 ; i += .2 ){
        if(i == 0 || i == 1 || i > 1.9){
            while(k != 0){
                printf("I=%.0f J=%.0f\n",i,j+i);
                j++;
                k--;
            }
            k = 3;
            j = 1;
        }
        else{
            while(k != 0){
                printf("I=%.1f J=%.1f\n",i,j + i );
                j++;
                k--;
            }
            k = 3;
            j = 1;
        }
    }

    return 0;
}
