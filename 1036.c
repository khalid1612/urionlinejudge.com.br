#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    double d = b*b - 4*a*c;

    if(a != 0.00 && d > 0){
        double r1 = (sqrt(d) - b) / (2*a) ;
        double r2 = (- b - sqrt(d) ) / (2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else{
        printf("Impossivel calcular\n");
    }


    return 0;
}
