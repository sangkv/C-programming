/* 
 * threads.h - là thư viện tiêu chuẩn trong C11 hỗ trợ multithreading, nhưng hiện tại rất ít được triển khai trong các trình biên dịch.
 * thread - là thư viện tiêu chuẩn trong C++ 11, cùng với std::thread hỗ trợ multithreading, nhưng hiện tại chưa ổn định.
 * pthread.h - là thư viện POSIX Threads, hỗ trợ multithreading cả C và C++, được phát triển từ khá lâu và ổn định.
 */

#include<stdio.h>
#include<stdlib.h>

#include<pthread.h>

#define NUM_THREADS 5

void* printHello(void* threadID)
{
	long int tid = (long int)threadID;
	printf("\nHello World! It's me, thread #%ld", tid);
	pthread_exit(NULL);
}

int main(int argc, char* argv[])
{
	/* Khai báo mảng các threads */
	pthread_t threads[NUM_THREADS];
	
	/* Sử dụng các threads */
	for(long int t=0;t<NUM_THREADS;t++)
	{
		printf("\nIn main: creating thread %ld", t);
		int rc = pthread_create(&threads[t], NULL, printHello, (void*)t);
		if(rc)
		{
			printf("\nERROR; return code from pthread_create() is %d", rc);
			exit(-1);
		}
	}
	
	/* Last thing that main() should do */
	pthread_exit(NULL);
	
	return 0;
}

/* Compile: gcc -o multithreading multithreading.c -lpthread
 */
