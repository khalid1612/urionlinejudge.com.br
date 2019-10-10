#include <stdio.h>

int main()
{
    int even[5];
    int odd[5];

    int total = 15;

    int i = 0,j = 0;

    while(total--)
    {
        int num;
        scanf("%d",&num);

        if(num % 2 == 0){
            even[i] = num;
            i++;
        }
        else{
            odd[j] = num;
            j++;
        }

        if(i == 5){
            for(i = 0;i < 5; i++){
                printf("par[%d] = %d\n",i,even[i]);
            }
            i = 0;
        }
        else if(j == 5){
            for(j = 0;j < 5; j++){
                printf("impar[%d] = %d\n",j,odd[j]);
            }
            j = 0;
        }
    }

    int k;
    for(k = 0;k < j; k++){
        printf("impar[%d] = %d\n",k,odd[k]);
    }
    for(k = 0;k < i; k++){
        printf("par[%d] = %d\n",k,even[k]);
    }


    return 0;
}
