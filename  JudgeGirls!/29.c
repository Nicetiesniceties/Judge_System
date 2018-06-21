#include<stdio.h>
int M, N;
int path(int M, int N){
	if(M < 1 || N < 1)return 0;
	else if(M == 1 && N == 1)return 1;
	else return path(M - 1, N) + path(M, N - 1);
	}
int main(void)
{
	scanf("%d%d", &M, &N);
	printf("%d", path(M, N));
	return 0;
	}
