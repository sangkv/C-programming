#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* agrv[])
{
	FILE* fp;
	
	/* Write data */
	fp = fopen("stream-binary.data","wb");
	
	if(fp != NULL)
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		long unsigned int numWritten = fwrite(arr, sizeof(int), 10, fp);
		printf("numWritten = %lu", numWritten);
	}
	
	fclose(fp);
	
	/* Read data */
	fp = fopen("stream-binary.data","rb");
	
	if(fp != NULL)
	{
		int* p = (int*) malloc(10*sizeof(int));
		long unsigned int numRead = fread(p, sizeof(int), 10, fp);
		if(numRead != 0)
		{
			for(int i=0;i<10;i++)
			{
				printf("\np[%d] = %d",i,p[i]);
			}
		}
	}
	
	fclose(fp);
	
	return 0;
}
