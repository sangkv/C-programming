#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
	return a + b;
}

int nhan(int a, int b)
{
	return a*b;
}

int main(int argc, char* agrv[])
{
	int (*p)(int, int);
	
	int result = 0;
	
	// Tinh tong
	p = &sum;
	result = (*p)(2,5);
	printf("\nResult = %d", result);
	
	// Tinh nhan
	p = &nhan;
	result = (*p)(2,5);
	printf("\nResult = %d", result);

	return 0;
}
