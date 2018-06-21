#include<stdio.h>
int main()
{
	long long int model;
	while(~scanf("%lld", &model)){
		int count = 0;
		for(long long int test = 1, i = 0; i <= 62; i++, test *= 2)
			if(model & test)count++;
		printf("%d\n", count);
		}
	return 0;
	}
