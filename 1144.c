#include <stdio.h>
 
int main() {
 
    int line;
    scanf("%d",&line);

    int i;
    for (i = 1; i <= line; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,i*i+1,i*i*i+1);
    }
    
    return 0;
}
