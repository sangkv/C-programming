#include<stdio.h>
#include<stdlib.h>

#define pi 3.14


long int giaithua(int k)
{
	if(k==1)
		return 1;
	else
		return k*giaithua(k-1);
}


int main(int argc, char* agrv[])
{
	long int n = giaithua(5);
	printf("Result = %ld",n);
		
	return 0;
}
