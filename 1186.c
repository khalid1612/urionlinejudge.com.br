#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);

    float sum = 0.0,num;
    int i,j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f",&num);
            if(j > 11-i)
                sum += num;
        }
    }

    if(c == 'S')
        printf("%.1f\n",sum);
    else
        printf("%.1f\n",sum/66.0);

    return 0;
}


