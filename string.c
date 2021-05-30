#include<stdio.h>
#include<stdlib.h>

#define pi 3.14;


unsigned long int length(char A[])
{
	unsigned long int i = 0;
	while(A[i] != '\0')
	{
		i++;
	}
	return i;
}

void concat(char A[], char B[])
{
	unsigned long int lenA = length(A);
	unsigned long int lenB = length(B);
	
	char C[lenA + lenB + 1];
	
	
	unsigned long int k = 0;
	for(unsigned long int i = 0; i<lenA; i++)
	{
		C[k] = A[i];
		k++;
	}
	for(unsigned long int j = 0; j<lenB; j++)
	{
		C[k] = B[j];
		k++;
	}
	C[k] = '\0';
	
	
	for(unsigned long int n = 0; n <= k; n++)
	{
		A[n] = C[n]; /* Kích thước mảng A đã vượt quá kích thước khởi tạo, liệu bộ nhớ vượt mức có ghi đè lên dữ liệu khác hoặc chương trình gây ra lỗi máy tính??? */
	}

	
}

int main(int argc, char* agrv[])
{
	
	
	char A[] = "Toi_yeu_";
	char B[] = "Viet_Nam";
	printf("\n%lu", length(A));
	printf("\n%lu", length(B));	
	
	concat(A,B); // Viết hàm nối chuỗi B vào cuối chuỗi A
	printf("\n%lu", length(A));
	
	printf("\nA = %s",A);
	
	return 0;
}
