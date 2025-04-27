#include<stdio.h>

#include"utils.h"

#define SIZE                    13
#define NUMBER_OF_TRIAL         100000000
#define NUMBER_OF_POINTS        1000000000


void foo(const int* p)
{
    int* xptr = p;
}

int main() 
{
   int ar[5]  = {0, 1, 2, 3, 4};

   int* px = ar + 5;
   int* py = ar + 5;

   if (px == py)
       puts("Evet  esit\n");
    else
        puts("Hayir esit degil\n");

}
