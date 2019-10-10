#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char name[10],name2[10];
        scanf("%s%s",name,name2);

        if(name[1] == 'a' && name2[1] == 'a')
            printf("Ambos venceram\n");
        else if(name[1] == 'e' && name2[1] == 'e')
            printf("Sem ganhador\n");
        else if(name[1] == 't' && name2[1] == 't')
            printf("Aniquilacao mutua\n");
        else if(name[1] == 't' && name2[1] == 'a')
            printf("Jogador 1 venceu\n");
        else if(name[1] == 'a' && name2[1] == 't')
            printf("Jogador 2 venceu\n");
        else if(name[1] == 't' && name2[1] == 'e')
            printf("Jogador 1 venceu\n");
        else if(name[1] == 'e' && name2[1] == 't')
            printf("Jogador 2 venceu\n");
        else if(name[1] == 'e' && name2[1] == 'a')
            printf("Jogador 1 venceu\n");
        else if(name[1] == 'a' && name2[1] == 'e')
            printf("Jogador 2 venceu\n");
    }

    
    return 0;
}
