#include  <stdio.h>

int main()
{
    int num[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char ico[13]={'I','A','V','B','X','A','L','B','C','A','D','B','M'};

    int n,k;
    scanf("%d",&n);

    int i;
    while(n != 0)
    {
        for(i = 0; i < 13; i++)
        {
            if(n >= num[i] && n < num[i+1])
            {
                if(ico[i] == 'A')
                {
                    printf("%c",ico[i-1]);
                    printf("%c",ico[i+1]);
                }
                else if(ico[i] == 'B')
                {
                    int d = num[i+1] - num[i];
                    for(k = 0; k < 13; k++)
                    {
                        if(d == num[k])
                        {
                            printf("%c",ico[k]);
                            printf("%c",ico[i+1]);
                            break;
                        }
                    }
                }
                else
                    printf("%c",ico[i]);

                n -= num[i];
            }
        }
    }
    printf("\n");




    return 0;
}
