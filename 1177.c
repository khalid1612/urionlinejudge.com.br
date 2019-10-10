#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i,j = 0;
    for(i = 0; j < 1000; i++,j++){
        printf("N[%d] = %d\n",j,i);
        if(i == n-1)
            i = -1;
    }

    //use array;
    /*
    int store[1000];
    for(i = 0; j < 1000; i++,j++){
        store[j] = i;
        if(i == n-1)
            i = -1;
    }
    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n",i,store[i]);
    }
    */


    return 0;
}
