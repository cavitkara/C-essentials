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
void find_min_max_element(int* arr, int size);
void find_runnerup(int* arr, int size);



#endif