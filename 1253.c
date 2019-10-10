#include <stdio.h>
#include <string.h>
//NOT COMPLETE

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char str[50];
        scanf("%s",str);

        int n;
        scanf("%d",&n);

        int i;
        for(i=0; i < strlen(str); i++)
        {
            if(str[i]-n < 65)
            {
                printf("%c",91 - (65 -(str[i]-n)));
            }
            else
                printf("%c",str[i]-n);
        }
        printf("\n");

    }

    return 0;
}
