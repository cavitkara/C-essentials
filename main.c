#include<stdio.h>

#include"utils.h"

#define SIZE                    5
#define NUMBER_OF_TRIAL         100000000
#define NUMBER_OF_POINTS        1000000000

int main() 
{

    randomize();

    int arr[SIZE];
    set_array_random(arr, SIZE);
    print_arr(arr, SIZE);

    find_runnerup(arr, SIZE);
}
