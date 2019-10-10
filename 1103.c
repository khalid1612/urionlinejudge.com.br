#include <stdio.h>
#include <math.h>

int main()
{
    int m1,h1,m2,h2;
    int start,end;


    while(1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

        if(m1 == 0 && h1 == 0 && m2 == 0 && h2 == 0)
        {
            break;
        }
        else
        {
            int totalTime = 0;


            if(h1 == h2 && m2 > m1)
            {
                totalTime = m2 - m1;
            }
            else if(h1 >= h2)
            {
                totalTime = ((24*60) - (h1*60+m1)) + (h2*60+m2);
            }
            else{
                totalTime = ((h2 - h1) * 60) + (m2-m1);
            }

            printf("%d\n",totalTime);
        }
    }
    return 0;
}
