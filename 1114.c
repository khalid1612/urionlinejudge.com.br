#include <stdio.h>

int main()
{
    while(1)
    {
        int a;
        scanf("%d",&a);

        if(a == 2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }

    return 0;
}

