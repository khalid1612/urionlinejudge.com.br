#include <stdio.h>

int main()
{
    int n,count = 0;
    float total = 0;
    scanf("%d",&n);

    while(n >= 0){
        total += n;
        count++;
        scanf("%d",&n);
    }

    printf("%.2f\n",total/count);


    return 0;
}
