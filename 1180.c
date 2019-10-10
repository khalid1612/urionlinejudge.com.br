#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int store[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d",&store[i]);
    }
    int low = store[0],pos = 0;
    for(i = 1; i < n; i++){
        if(low > store[i]){
            low = store[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n",low,pos);


    return 0;
}
