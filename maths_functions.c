#include <stdio.h>

void add(int* num, int a)
{
	*num = *num + a;
}

void subtract(int* num, int a)
{
	*num -= a;
}
	

int main()
{
	int num = 10;
	add(&num,4);
	printf("%i \n",num);
	subtract(&num, 7);
	printf("%i \n",num);
	return 0;	
}
