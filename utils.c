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
void calculate_average()
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
		return 1;
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
	int digit_param  = 1;

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
