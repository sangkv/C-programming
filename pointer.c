#include<stdio.h>
#include<stdlib.h>

#define pi 3.14;

void swap(int* p, int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main(int argc, char* agrv[])
{
	int p = 10;
	int q = 15;
	printf("p = %d", p);
	printf("\nq = %d", q);
	printf("\n\nAfter swap: ");
	swap(&p, &q);
	printf("\np = %d", p);
	printf("\nq = %d", q);
	
	int a = 10;
	printf("\n\na = %d",a);
	printf("\nsizeof(a) = %ld byte",sizeof(a));
	
	
	return 0;
}
