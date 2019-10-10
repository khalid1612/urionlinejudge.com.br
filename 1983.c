#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int num;
    float note = 0.0;

    while(n--)
    {
        int a;
        float  b;
        scanf("%d%f",&a,&b);
        if(b >= 8 && b > note)
        {
            note = b;
            num = a;
        }
    }

    if(note == 0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",num);


    return 0;
}
