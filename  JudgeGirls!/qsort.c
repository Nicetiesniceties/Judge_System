#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void* a, const void* b){
	const char* A =  *(const char**) a;
	const char* B =  *(const char**) b;
	return strcmp(A, B);
	}
int main()
{
	char *raw[] = {"d", "bcd", "cd", "abcd"};
	qsort(raw, 4, sizeof(char *), cmp);
	for(int i = 0; i < sizeof(raw)/sizeof(raw[0]); i++)
		printf("array[%d] = %s\n", i, raw[i]);
	return 0;
	}
