/* 
 * threads.h - là thư viện tiêu chuẩn trong C11 hỗ trợ multithreading, nhưng hiện tại rất ít được triển khai trong các trình biên dịch.
 * thread - là thư viện tiêu chuẩn trong C++ 11, cùng với std::thread hỗ trợ multithreading, nhưng hiện tại chưa ổn định.
 * pthread.h - là thư viện POSIX Threads, hỗ trợ multithreading cả C và C++, được phát triển từ khá lâu và ổn định.
 */

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

typedef struct
{
	char* name;
	char* email;
} data;

void* testThread(void* arg)
{
	printf("Information: \n");
	data* p = (data*) arg;
	printf("Name: %s\n", p->name);
	printf("Email: %s\n", p->email);
	
	/* return NULL; */
	return arg;
}

int main(int argc, char* argv[])
{
	pthread_t thread1;
	pthread_t thread2;
	
	data data1 = {"Sang", "sangkv.work@gmail.com"};
	data data2 = {"Kim", "kim.van.sang@rewardstyle.com"};
	
	int status = 0;
	status = pthread_create(&thread1, NULL, testThread, (void*) &data1);
	status = pthread_create(&thread2, NULL, testThread, (void*) &data2);
	
	void* result = NULL;
	status = pthread_join(thread1, &result);
	printf("Result: %s, %s\n", ((data*)result)->name, ((data*)result)->email);
	status = pthread_join(thread2, &result);
	printf("Result: %s, %s\n", ((data*)result)->name, ((data*)result)->email);
	
	
	return 0;
}

/* Compile: gcc multithreading.c -o multithreading -lpthread
 */
