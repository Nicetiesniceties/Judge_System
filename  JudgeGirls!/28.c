#include<stdio.h>
int plus(int n){
	if(n == 1)return 1;
	else return n * n + plus(n - 1);
	}
int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d", plus(N));
	return 0;
	}
