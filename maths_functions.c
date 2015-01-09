#include <stdio.h>

void add(int* num, int a)
{
	*num = *num + a;
}
	

int main()
{
	int num = 10;
	add(&num,4);
	printf("%i \n",num);
	return 0;	
}
