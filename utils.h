#ifndef UTILS_H
#define UTILS_H

#include<conio.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define PRINT_ITEM_INLINE 20
#define MAX_PASSWORD_LEN  9
#define MIN_PASSWORD_LEN 4

int isarmstrong(int  );
void ntimeswhileloop( int );
int power(int base, int exp);
int calculate_average();
int calculate_ndigit(int );
int sumdigit(int );
int revdigit(int );
void calculate_colatz_series(unsigned long long int );
unsigned long long factorial(unsigned long long );
int permutation( int n, int r);
int combination(int n, int r);
int isperfect( int );
void randomize(void);
void set_array_random(int* arr, unsigned n);
void print_arr(const int* arr, unsigned n);
double calculate_prob_of_tossing_a_coin(unsigned int number_of_toss);
double get_random_rational_num();
double calculate_pi_monte_carlo_sim(unsigned number_of_points);
double calculate_prob_crasp_monte_carlo_sim(unsigned number_of_trial);
int crasp_point(int dice);
int play_crasp(void);
int roll_2dices_sum(void);
char get_random_alphanum_char(void);
void print_random_password(void);
double calculate_mean_of_odd_numbers(int* arr, int size);
void find_min_max_element(const int* arr, int size);
void find_runnerup(const int* arr, int size);
int linear_search(const int* arr, int size, int item);
void revese_arr(int* arr, int size);
double calculate_standart_deviation(const int* , int);
void buble_sort(int* arr, int size);
void buble_sort_odd_even_order(int* arr, int size);
void selection_sort(int* arr, int size);
void binary_search(int* arr, int size);
int merge_sorted_arrays(int* arr1, int size1, int* arr2, int size2, int* arr3);
void number_of_elements(int* arr1,  int size, int* cnts );
void swap(int*, int*);

/*-----------------------------------------------------------
Buraya 25. ders örnekleri üzerinden gecilip tekrar yazilacak
----------------------------------------------------------- */
void get_circle_area(double radius, double* area);
void get_circle_values( double radius, double* area, double* circum);
void printArray2(const int*, int);
int sum_array(const int *, int);
double get_mean(const int*, int );
double get_std_deviation(const int*, int);
int get_array_max(const int* p, int);
void get_array_min_max(const int* arr, int size, int* min, int* max);
void reverse_array2(int* , int);
void reverse_array3(int*, int);
void bsort(int arr[], int size);
void copy_array(int* pdest, const int* source, int size);
void reverse_copy(int* pdest, const int* source, int size);
void reverse_copy2(int* pdest, const int* psource, int size);

#endif