#include <stdio.h>
#include <string.h>

int main()
{
    int test,i;
    scanf("%d",&test);

    for(i = 1; i <= test; i++)
    {
        char name1[10],name2[10];
        scanf("%s%s",name1,name2);

        if(strcmp(name1,name2) == 0)
            printf("Caso #%d: De novo!\n",i);
        else if(name1[0] == 't')
        {
            if(name2[1] == 'a' || name2[0] == 'l')
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(name1[0] == 'p')
        {
            if(name1[1] == 'a')
            {
                if((name2[0] == 'p' && name2[1] == 'e') || name2[0] == 'S')
                    printf("Caso #%d: Bazinga!\n",i);
                else
                    printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else
            {
                if(name2[0] == 'l' || name2[0] == 't')
                    printf("Caso #%d: Bazinga!\n",i);
                else
                    printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        else if(name1[0] == 'l')
        {
            if(name2[0] == 'S' || name2[1] == 'a')
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else
        {
            if(name2[0] == 't' || (name2[0] == 'p' && name2[1] == 'e'))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }

    }



    return 0;
}
