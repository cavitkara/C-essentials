#include<stdio.h>

#include"utils.h"

#define SIZE                    6
#define NUMBER_OF_TRIAL         100000000
#define NUMBER_OF_POINTS        1000000000

int main() 
{


    int x = 3;
    int y = 5;

    printf("x: %d   y: %d\n", x, y);

    swap(&x, &y);

    printf("x: %d   y: %d\n", x, y);
    return 0;

}
