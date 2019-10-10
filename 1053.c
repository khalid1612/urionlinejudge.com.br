#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int total = 1;
    for(n; n > 0; n--){
        total *= n;
    }

    printf("%d\n",total);

    return 0;
}
