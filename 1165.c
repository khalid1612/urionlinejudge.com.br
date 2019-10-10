#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int a;
        scanf("%d",&a);

        int i;
        int count = 0;
        for(i = 2; i <= sqrt(a); i++)
        {
            if(a%i == 0)
            {
                printf("%d nao eh primo\n",a);
                count++;
                break;
            }
        }

        if(count == 0)
            printf("%d eh primo\n",a);
    }

    return 0;
}
