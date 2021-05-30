#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* agrv[])
{
	FILE* fp;
	
	/* Write file */
	fp = fopen("stream-text.txt", "w");
	if(fp != NULL)
	{
		const char* name = "Sangkv";
		unsigned int old = 30;
		float score = 9.8;
		fprintf(fp,"%s",name);
		fprintf(fp,"\n%u",old);
		fprintf(fp,"\n%e",score); 
	}
	fclose(fp);


	/* Read file */
	fp = fopen("stream-text.txt", "r");
	
	char* p = (char*) malloc(100*sizeof(char)) ;
	unsigned int q;
	float k;
	
	fscanf(fp,"%s",p);
	fscanf(fp,"%u",&q);
	fscanf(fp,"%e",&k);
	
	fclose(fp);
	
	printf("p = %s",p);
	printf("\nq = %d",q);
	printf("\nk = %f",k);
	

	return 0;
}
