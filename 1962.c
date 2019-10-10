#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int year;
        scanf("%d",&year);

        if(year<2015)
            printf("%d D.C.\n",2015 - year);
        else
            printf("%d A.C.\n", abs(2015 - year)+1);
    }



    return 0;
}

