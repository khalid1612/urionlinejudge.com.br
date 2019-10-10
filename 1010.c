#include <stdio.h>
 
int main() {
 
    int a,b,c;
    float d,e;
    scanf("%d %d %f",&a,&b,&d);
    scanf("%d %d %f",&a,&c,&e);

    printf("VALOR A PAGAR: R$ %.2f\n",b*d + c*e);
 
    return 0;
}
