#include <stdio.h>
#include <string.h>

int main()
{
    char num[50], a;
    scanf("%s",num);

    int i, j;

    for(i=0, j=strlen(num)-1; i < strlen(num)/2; i++, j--)
    {
        a = num[i];
        num[i]=num[j];
        num[j]=a;
    }
    printf("%s\n", num);
    return 0;
}
