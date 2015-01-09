#include <stdio.h>

void add(int* num, int a)
{
	*num += a;
}

void subtract(int* num, int a)
{
	*num -= a;
}

void multiply(int* num, int a)
{
	*num *= a;
}

void divide(int* num, int a)
{
	*num /= a;	
}

	

int main()
{
	int num = 10;
	add(&num,4);
	printf("%i \n",num);
	subtract(&num, 7);
	printf("%i \n",num);
	multiply(&num, 100);
	printf("%i \n",num);
	divide(&num, 2);
	printf("%i \n",num);
	return 0;	
}
