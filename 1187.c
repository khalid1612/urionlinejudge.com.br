#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double m[12][12];

    char o;
    cin >> o;


    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    double sum = 0.0;

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 11-i; j++){
            sum += m[i][j];
        }
    }

    if(o == 'S'){
         printf("%.1f\n", sum);
    }
    else{
         printf("%.1f\n", sum/30.0);
    }

    return 0;
}
