/*1 4 6 78 78 1 6 8 0      print the unique items in the arr 
exp   4 8 0 */

#include<stdio.h>

#include"../../utils.h"

#define SIZE 10

void print_unique_items(int* arr, int size)
{
    for (int i = 0; i < size; ++i){
        int item = arr[i];
        int j;
        for (j = 0; j < size; ++j){
            if ( j == i)
                continue;
            if (item == arr[j])
                break;
        }
        if ( j == size )
            printf("%d ", arr[i]);
    }

    putchar('\n');
}

int main()
{
    randomize();

    int arr[SIZE];

    for(int i = 0; i < SIZE; ++i)
		arr[i] = rand() % 20;

        print_arr(arr, SIZE);
        getchar();

    print_unique_items(arr, SIZE);
}