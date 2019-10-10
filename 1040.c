#include <stdio.h>

int main()
{
    float n1,n2,n3,n4;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    float avr = ((n1*2)+(n2*3)+(n3*4)+n4)/10;

    printf("Media: %.1f\n",avr);

    if(avr >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avr < 5)
    {
            printf("Aluno reprovado.\n");
    }
    else if(avr >= 5 && avr <= 6.9)
    {
        float n5;
        scanf("%f",&n5);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",n5);

        avr = (avr+n5)/2;

        if(avr >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
                printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",avr);

    }


    return 0;
}
