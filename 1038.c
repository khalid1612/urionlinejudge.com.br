#include <stdio.h>

int main()
{
    int x,y;

    scanf("%d %d",&x,&y);

    float price;

    switch (x)
    {
        case 1:
             price = 4;
             break;
        case 2:
             price = 4.50;
             break;
        case 3:
             price = 5;
             break;
        case 4:
             price = 2;
             break;
        case 5:
             price = 1.50;
             break;
    }

    printf("Total: R$ %.2f\n",price*y);

    return 0;
}
