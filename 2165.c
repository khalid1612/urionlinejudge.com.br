#include <stdio.h>
#include <string.h>

int main()
{
    char t[550];
    gets(t);

    if(strlen(t) > 140)
        printf("MUTE\n");
    else
        printf("TWEET\n");

    return 0;
}
