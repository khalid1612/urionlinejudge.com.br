#include <stdio.h>

int main()
{
    int a,n;
    scanf("%d %d",&a,&n);

    while(n <= 0){
        scanf("%d",&n);
    }

    int total = 0;
    int limit = a+n;
    for(a; a <limit; a++){
        total += a;
    }

    printf("%d\n",total);



    return 0;
}
