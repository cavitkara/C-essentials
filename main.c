#include<stdio.h>

#include"utils.h"

#define SIZE                    13
#define NUMBER_OF_TRIAL         100000000
#define NUMBER_OF_POINTS        1000000000


int main() 
{

    int x = 10;

    printf("(&x)[0]: %d\n", (&x)[0]);

    int* ptr = &x;
    ++ptr;

    printf("*--ptr: %d\n", *--ptr);

}
