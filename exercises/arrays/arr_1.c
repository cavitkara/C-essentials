/*Create an histogram which represent integer value of each item of an array. It should be represented by stack of stars for each item*/

#include"../../utils.h"
#include<stdio.h>


#define SIZE 10


int find_max(int* arr, int size)
{
    int max = arr[0];
    for(int i = 1; i < size; ++i)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void print_histogram(int* arr, int size)
{
    int max_height = find_max(arr, size);
    

    for(int i = 0, height = max_height; i < max_height; ++i, --height ){
        
        for(int j = 0; j < size; ++j){
            if (arr[j] < height)
                putchar(' ');
            else
                putchar('*');
            putchar(' ');
        }
        
        putchar('\n');
    }
       
}

int main()
{

    randomize();

    int arr[SIZE];

    for(int i = 0; i < SIZE; ++i)
		arr[i] = rand() % 10;


    print_arr(arr, SIZE);

    getchar();

    print_histogram(arr, SIZE);

}