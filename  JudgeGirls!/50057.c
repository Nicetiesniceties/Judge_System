#include<stdio.h>
int main(void)
{
	unsigned int input, test, pre, now;
	int N, i = 1, count = 0;
	scanf("%d", &N);
	while(N--){
		scanf("%u", &input);
		for(; i == 1; i--)
			pre = input / 0x80000000;
		for(unsigned int test = 0x80000000; test >= 1; test /= 2){
			now = input / 0x80000000; 
			if(pre == now){
				printf("%u", now);
				}
			else if(pre != now){
				count %= 40;
				printf("\n%*s%u",count, count == 0 ? "":" ", now);
				}
			count++;
			pre = now;
			input = input << 1;
			}		
		}
	return 0;
	}
