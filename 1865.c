#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    scanf("%d",&c);

    while(c--)
    {
        char name[50];
        int n;
        scanf("%s %d",name,&n);
        if(strcmp(name,"Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
