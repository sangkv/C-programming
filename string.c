#include<stdio.h>
#include<stdlib.h>

#define pi 3.14;

unsigned long int length(const char A[])
{
	unsigned long int i = 0;
	while(A[i] != '\0')
	{
		i++;
	}
	return i;
}

char* concat(const char A[], const char B[])
{
	unsigned long int lenA = length(A);
	unsigned long int lenB = length(B);
	
	char* p = (char*) malloc((lenA + lenB + 1)*sizeof(char));
	
	if(p==NULL)
	{
		return NULL;
	}
	else
	{
		unsigned long int k = 0;
		for(unsigned long int i = 0; i<lenA; i++)
		{
			p[k] = A[i];
			k++;
		}
		for(unsigned long int j = 0; j<lenB; j++)
		{
			p[k] = B[j];
			k++;
		}
		p[k] = '\0';
		
		return p;
	}
}

int main(int argc, char* agrv[])
{
	char A[] = "Toi_yeu_";
	char B[] = "Viet_Nam";
	
	printf("A = %s",A);
	printf("\nlength A = %lu", length(A));
	printf("\n\nB = %s",B);
	printf("\nlength B = %lu", length(B));	
	
	char* p = concat(A,B);
	if(p==NULL)
	{
		printf("\n\nNot enough memory!!!");
	}
	else
	{
		printf("\n\nA + B = %s",p);
		printf("\nleng A + B = %lu", length(p));
		free(p);
		p = NULL;
	}
	
	return 0;
}
