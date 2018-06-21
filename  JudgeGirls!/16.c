#include<stdio.h>
int main(void)
{
	int n,num, odd_num[1000]={}, even_num[1000]={};
	scanf("%d\n", &n);
	int o = 0,e = 0;
	for(int i = 0; i <= n-1; i++){
		scanf("%d", &num);
		if (num % 2 == 0){
			even_num[e] = num;
			e++;
		}
		else{
			odd_num[o] = num;
			o++;
		}
	}
	o = e = 0;
	while(odd_num[o] != 0){
		if(odd_num[o + 1] == 0){
			printf("%d\n", odd_num[o]);
			break;
		}
		else{
			printf("%d ", odd_num[o]);
			o++;
		}
	}
	while(even_num[e] != 0){
		if(even_num[e + 1] == 0){
			printf("%d\n", even_num[e]);
			break;
		}
		else{
			printf("%d ", even_num[e]);
			e++;
		}
	}

	return 0;
}
