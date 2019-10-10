#include <stdio.h>

int main()
{
    int a ,rem = 0;

    scanf("%d",&a);

    printf("%d\n",a);

    printf("%d nota(s) de R$ 100,00\n",a / 100);
    rem = a%100;

    printf("%d nota(s) de R$ 50,00\n",rem / 50);
    rem %= 50;

    printf("%d nota(s) de R$ 20,00\n",rem / 20);
    rem %= 20;

    printf("%d nota(s) de R$ 10,00\n",rem / 10);
    rem %= 10;

    printf("%d nota(s) de R$ 5,00\n",rem / 5);
    rem %= 5;

    printf("%d nota(s) de R$ 2,00\n",rem / 2);

    printf("%d nota(s) de R$ 1,00\n",rem % 2);



    return 0;
}
