#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* agrv[])
{
	// Khai bao va cap phat bo nho dong
	int* p = (int*) malloc(50*sizeof(int));
	
	if(p==NULL)
	{
		printf("Not enough the memory!");
	}
	else
	{
		// Gan gia tri cho cac phan tu mang
		for(int i=0; i<50; i++)
		{
			p[i] = i * 2;
		}
	
		// In gia tri cac phan tu mang ra man hinh
		for(int i=0; i<50; i++)
		{
			printf("\np[%d] = %d",i,p[i]);
		}
	
		// Giai phong bo nho da cap phat
		free(p);
	}
	
	return 0;
}
