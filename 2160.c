#include <stdio.h>
#include <string.h>

int main()
{
    char line[550];
    gets(line);

    if(strlen(line) > 80)
        printf("NO\n");
    else
        printf("YES\n");
}
