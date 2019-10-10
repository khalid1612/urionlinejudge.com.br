#include <stdio.h>

int main()
{
    char line[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};

    int num,i;
    scanf("%d",&num);

    for(i = 0; i < num; i++)
        printf("%c",line[i]);

    printf("\n");

    return 0;
}
