#include <stdio.h>
 
int main() {
 
    float x1,y1,x2,y2;

    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

    float x = (x2 - x1) * (x2 - x1);
    float y = (y2 - y1) * (y2 - y1);

    printf("%.4f\n",sqrt(x+y));
 
    return 0;
}
