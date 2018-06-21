#include<stdio.h>
int main()
{
	int model;
	while(~scanf("%d", &model)){
		int count = 0;
		for(int test = 1, i = 0; i <= 30; i++, test *= 2)
			if(model & test)count++;
		printf("%d\n", count);
		}
	return 0;
	}
