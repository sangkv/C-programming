#include<stdio.h>
#include<stdlib.h>

// Dinh nghia kieu du lieu cau truc
typedef struct
{
	int numerator;
	int denomirator;
} Fraction;

void swap(Fraction* ptr_fract1, Fraction* ptr_fract2)
{
	Fraction temp = *ptr_fract1;
	*ptr_fract1 = *ptr_fract2;
	*ptr_fract2 = temp;
}

int main(int argc, char* agrv[])
{
	/* 1. Pointer struct */
	Fraction fract;
	Fraction* ptr_fract;
	
	// Tro toi dia chi bienn cau truc
	ptr_fract = &fract;
	
	// Thao tac cac thanh phan bien fract bang pointer
	ptr_fract->numerator = 1;
	ptr_fract->denomirator = 2;
	
	// In gia tri cac phan tu bien cau truc de xem thu ket qua
	printf("\nfract.numerator = %d",fract.numerator);
	printf("\nfract.denomirator = %d",fract.denomirator);
	
	/* 2. Truyen bien cau truc vao ham */
	Fraction fract1 = {1, 2};
	Fraction fract2 = {2, 3};
	
	swap(&fract1, &fract2);
	
	printf("\n\nfract1.numerator = %d",fract1.numerator);
	printf("\nfract1.denomirator = %d",fract1.denomirator);
	printf("\nfract2.numerator = %d",fract2.numerator);
	printf("\nfract2.denomirator = %d",fract2.denomirator);
	
	/* 3. Cap phat bo nho dong mang cau truc su dung pointer */
	Fraction* p = (Fraction*) malloc(10*sizeof(Fraction));
	
	for(int i=0;i<10;i++)
	{
		p[i].numerator = i;
		p[i].denomirator = i*2;
	} 
	
	for(int i=0;i<10;i++)
	{
		printf("\n\np[%d].numerator = %d",i,p[i].numerator);
		printf("\np[%d].denomirator = %d",i,p[i].denomirator);
	}
	free(p);
	return 0;
}
