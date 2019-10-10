#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int i = 1;
    for(i; i < 11; i++)
        printf("%d x %d = %d\n",i,a,i*a);


    return 0;
}
