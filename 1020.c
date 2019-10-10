#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    int year = a / 365;
    int month ;
        if(year == 0)
            month = a / 30;
        else
            month = (a % 365) / 30;

    int day ;
        if(month == 0)
            day = a % 365;
        else
            day = (a % 365) % 30;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);


    return 0;
}
