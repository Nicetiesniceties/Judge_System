#include<stdio.h>
int main()
{
	int model;
	while(~scanf("%d", &model)){
		int max = 0, count = 0, PreIsOne;
		for(int test = 1, i = 0; i <= 30; i++, test *= 2){
			if(model & test && model & (test / 2))count++;
			else count = 0;
			if(count > max)max = count;
			}
		printf("%d\n", max + 1);
		}
	return 0;
	}
