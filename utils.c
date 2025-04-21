#include"utils.h"
#include<math.h>


/*
is an armstrong number*/
int isarmstrong(int x )
{
	int d1 = x % 10;
	int d2 = x / 10 % 10;
	int d3 = x / 100;

    return x == d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3; 
}

void ntimeswhileloop( int n)
{
    int cnt = 0;
    while (n--)
        printf("%d. times\n", ++cnt);

    printf("n = %d", n);
}

int power(int base, int exp)
{
    int res = 1;

    while (exp--) {
        res *= base;
    }

    return res;
}

#include<conio.h>
#include<time.h>
int calculate_average()
{

	char ch;
	int val;
	int cnt = 0;
	int sum = 0;
	int min, max;

	srand((unsigned int)time(0));

	while (1){

		printf("tam sayi girecek misiniz? (e) (h)\n");

		while ((ch = _getch()) != 'e' && ch != 'h')
			; //null statement

		if (ch == 'h')
			break;

		printf("bir tam sayi girin:\n");
		val = (rand()%2 ? 1 : -1) * rand(); //scanf("%d", &val);
		printf("%d\n", val);
		if (cnt == 0)
		{
			min = max = val;
		}
		 if (val > max)
			max = val;
		else if (val < min)
			min = val;
			
		++cnt;
		sum += val;		

	}

	if (!cnt){
		printf("hic giris yapmadiniz!!\n");
		return -1 ;
	}

	printf("%d adet sayi girdiniz\n", cnt);
	printf("ortalama: %d\n", sum / cnt);
	printf("girilen maksimim deger: %d\n", max);
	printf("girilen minimum deger: %d\n", min);


	return 0;
}

int calculate_ndigit(int x)
{
	int digit_count = 0;

	do
    {
		x /= 10;
		++digit_count;
	} while (x != 0);
    
	return digit_count;
}

int sumdigit(int x)
{
	int sum = 0;


	while (x != 0){
		sum += x % 10;
		x /= 10;
		
	}

	return sum;
}

int revdigit(int x)
{
	int res = 0;
	//int digit_param  = 1;

	while (x != 0){
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res;

	//734
}

void calculate_colatz_series(unsigned long long int x)
{

	while( x != 1){
		if (x % 2 == 0)
			x /= 2;
		else
			x = 3 * x + 1;
		printf("%llu ", x);
	}
}

unsigned long long factorial(unsigned long long x)
{
	int res = 1;

	for(unsigned long long i = 1; i <= x; i++)
		res *= i;

	return res;
}

int permutation( int n, int r)
{
	return factorial(n) / factorial(n - r);
}

int combination(int n, int r)
{
	return factorial(n) / factorial(n - r) / factorial(r);
}

int isperfect( int x)
{
	int sum = 0;

	for(int i = 1; i <= x / 2; i++)
	{
		if (x % i == 0)
			sum += i;
	}

	return sum == x;
}

void distribute_rand_in_years(unsigned year_min, unsigned year_max)
{
	while(1){
		printf("%d ", rand() % (year_max - year_min) + year_min);
		getch();
	}
}

void randomize(void)
{
	srand(time(NULL));
}

void set_array_random(int* arr, unsigned n)
{

	for(int i = 0; i < n; ++i)
		arr[i] = rand() % 1000;
}

void print_arr(const int* arr, unsigned n)
{
	for(int i = 0; i < n; i++){
		if (i && i % PRINT_ITEM_INLINE == 0)
			putchar('\n');
		printf("%4d ", arr[i]);
	}
		

	printf("\n-----------------------------------------------------------------------\n");
}

double calculate_prob_of_tossing_a_coin(unsigned int number_of_toss)
{
	#define HEAD 1
	unsigned head_count = 0;

	for(int i = 0; i < number_of_toss; ++i)
		if (rand() % 2)
			++head_count;

	double prob = (double)head_count / number_of_toss;

	printf("Head Porbability of tossing a coin %d times: %f\n", number_of_toss, prob);

	return prob;
}

double get_random_rational_num()
{
	return (double)rand() / RAND_MAX;
}

double calculate_pi_monte_carlo_sim(unsigned number_of_points)
{
	double x, y;
	unsigned inside_cnt = 0;

	for(int i = 0; i < number_of_points; ++i){
		x = get_random_rational_num();
		y = get_random_rational_num();
		if ( x * x + y * y <= 1)
			++inside_cnt;
	}

	double pi = 4. * inside_cnt / number_of_points;

	printf("%d times calculated pi: %f\n", number_of_points, pi);

	return pi;
}

int roll_2dices_sum(void)
{
	return rand() % 6 + 1 + rand() % 6 + 1;
}

int play_crasp(void)
{
	int sum = roll_2dices_sum();

	switch(sum) {
		case 7 :
		case 11: return 1;
		case 2 :
		case 3 :
		case 12: return 0;
		default: return crasp_point(sum);

	}

}

int crasp_point(int dice)
{	
	while(1){
		int new_dice = roll_2dices_sum();
		if (new_dice == dice) return 1;
		if (new_dice == 7)    return 0;
	}	
}

double calculate_prob_crasp_monte_carlo_sim(unsigned number_of_trial)
{
	unsigned win_cnt = 0;

	for(int i = 0; i < number_of_trial; ++i)
		if (play_crasp() == 1)
			++win_cnt;

	double prob = (double) win_cnt / number_of_trial;

	printf("%d times crasp win prob: %f\n", number_of_trial, prob);

	return prob;
}

void print_random_password(void)
{
	
	int len = rand() % (MAX_PASSWORD_LEN - MIN_PASSWORD_LEN + 1) + MIN_PASSWORD_LEN;

	for (int i = 0; i < len; ++i)
		putchar(get_random_alphanum_char());

	putchar('\n');
}

char get_random_alphanum_char(void)
{
	char ch;
	while (1){
		if (isalnum(ch = rand() % 128))
			return ch;
	}
}

double calculate_mean_of_odd_numbers(int* arr, int size)
{
	int odd_cnt = 0;
	int sum_odd = 0;

	for (int i = 0; i < size; i++)
		if ( arr[i] % 2){
			odd_cnt++;
			sum_odd += arr[i];
		}

	if (odd_cnt)
		return (double)sum_odd / odd_cnt;
	else {
		printf("Dizide tek sayi yok\n");
		return -1;
	}
}

void find_min_max_element(const int* arr, int size)
{
	int min = arr[0], max = arr[0];
	int min_idx = 0, max_idx = 0;


	for (int i = 1; i < size; ++i)
		if (arr[i] > max)
			max = arr[i], max_idx = i;
		else if (arr[i] < min)
			min = arr[i], min_idx = i;
	
	printf("min: arr[%d] = %d	max: arr[%d] = %d\n", min_idx, min, max_idx, max);
}

void find_runnerup(const int* arr, int size)
{
	int runnerup;
	int max;

	max = arr[0];
	runnerup = arr[1];

	if (arr[1] > arr[0])
		runnerup = arr[0], max = arr[1];

	for (int i = 2; i < size; ++i)
		if (arr[i] > max)
			runnerup = max, max = arr[i];
		else if (arr[i] > runnerup)
			runnerup = arr[i];


	printf("runnerup: %d\n", runnerup);

	}

	int linear_search(const int* arr, int size, int item)
	{
		int i = 0;

		for (i = 0; i <= size && arr[i] != item; ++i){
			// null statement
		}
		
		if (i < size)
		{
			printf("%d sayisi %d. eleman", item, i);
			return i;
		}
		printf("%d saysisi bulunamadi\n", item);
		return -1;
	}

	void revese_arr(int* arr, int size)
	{
		
		for (int i = 0; i < size / 2; i++)
		{
			int temp = arr[i];
			arr[i] = arr[size - 1 - i];
			arr[size - 1 - i] = temp;
		}

		print_arr(arr, size);
		
	}

	double calculate_standart_deviation(const int* arr , int size)
	{
		//TODO

		return .0;
	}

	
void buble_sort(int* arr, int size)
{
	for (int i = 0; i < size -1; ++i )
		for (int j = 0; j < size - 1 - i; ++j){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j + 1 ];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}

	print_arr(arr, size);
}

void buble_sort_odd_even_order(int* arr, int size)
{
	for (int i = 0; i < size -1; ++i )
		for (int j = 0; j < size - 1 - i; ++j){
			if ((arr[j] % 2 == 0 && arr[j + 1 ] % 2) || ((arr[j] % 2 == arr[j + 1] % 2) && (arr[j] > arr[j + 1])) ){
				int temp = arr[j + 1 ];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}

	print_arr(arr, size);
}

void selection_sort(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i){
		int min_idx = i;
		for (int j = i + 1; j < size; ++j){
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		if ( min_idx != i){
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}

	print_arr(arr, size);
}

void binary_search(int* arr, int size)
{
	//TODO
}

int merge_sorted_arrays(int* arr1, int size1, int* arr2, int size2, int* arr3)
{
	//TODO
	return 0;
}

void number_of_elements(int* arr1,  int size, int* cnts )
{
	//TODO
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void get_circle_area(double radius, double* area)
{
	*area = 3.14159 * radius * radius;
}

void get_circle_values( double radius, double* p_area, double* p_circum)
{
	*p_area = 3.14159 * radius * radius;
	*p_circum = 2 * 3.14159 * radius;
}

void printArray2(const int* p, int size)
{
	while (size--)
		printf("%3d ", *p++);

	putchar('\n');
}

int sum_array(const int* p, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i){
		sum += *(p + i);
	}

	return sum;
}

double get_mean(const int* p, int size)
{
	return (double)sum_array(p, size) / size;
}
double get_std_deviation(const int* p, int size)
{
	double sum_square = 0;
	double mean = get_mean(p, size);

	for (int i = 0; i < size; ++i)
	{
		sum_square += (p[i] - mean) * (p[i] - mean);
	}

	return sqrt(sum_square / (size -1));
}

int get_array_max(const int* p, int size)
{
	int max = *p;

	for(int i = 1; i < size; ++i)
		if (p[i] > max)
		
			max = p[i];
		
	return max;
	
}


void get_array_min_max(const int* p, int size, int* min, int* max)
{
	*min = *max = *p;

	for (int i = 1; i < size; ++i){
		if (p[i] > *max)
			*max = p[i];
		else if (p[i] < *min)
			*min = p[i];
	}
}

void reverse_array2(int* p, int size)
{
	for (int i =  0 ; i < size / 2; ++i )
		swap(p + i, p + size - 1 - i );
}

void reverse_array3(int* p, int size)
{
	int* p_end = p + size;
	int n = size / 2;

	while (n--)
		swap(p++, --p_end);
}

void bsort(int p[], int size)
{
	for (int i = 0; i < size - 1; ++i)
		for (int j = 0; j < size - 1 - i; ++j)
			if ( p[j ] > p[j + 1])
				swap(p + j + 1, p + j);
}

void copy_array(int* pdest, const int* psource, int size)
{
	while(size--)
		*pdest++ = *psource++;	
}