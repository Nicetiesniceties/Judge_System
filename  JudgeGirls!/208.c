#include<stdio.h>
int main(void)
{
	int X, Y, countX = 0, countY = 0;
	char one , zero;
	unsigned int a;
	scanf("%d%d\n%c %c", &X, &Y, &one, &zero);
	while(~scanf("%u", &a)){
		for(unsigned int test = 4294967296 / 2; test >= 1; test /= 2){
			if(test & a)printf("%c", one);
			else printf("%c", zero);
			countX++;
			if(countX % X == 0){
				printf("\n");
				countY++;
				}
			if(countY == Y)return 0;
			}
		}
	return 0;
	}
