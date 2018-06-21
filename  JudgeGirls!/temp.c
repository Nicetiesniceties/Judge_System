#include<stdio.h>
int main()
{
	int a = 1;
	int *ptr = &a;
	printf("%lu", sizeof(ptr));
	return 0;
	}
