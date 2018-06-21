#include<stdio.h>
#include<stdlib.h>
#define swap(x,y){int t; t = x,  x = y, y = t;}
int N;
int cmp(const void *a, const void *b){
	const int A = *(const int *) a;
	const int B = *(const int *) b;
	return (A - B);
	}
void permute(int len, int num[]){
	if(len == 1)for(int i = 1; i <= N; i++)printf("%d%c", num[i], " \n"[i == N]);	
		else{
		for(int i = N + 1 - len; i <= N; i++){
			qsort(&num[N + 1 - len], len, sizeof(int), cmp);
			swap(num[N + 1 - len], num[i]);
			permute(len - 1, num);
			qsort(&num[N + 1 - len], len, sizeof(int), cmp);
			}
		}
	}
int main(void)
{
	int num[10];
	scanf("%d", &N);
	for(int i = 1; i <= N; i++)scanf("%d", &num[i]);
	qsort(&num[1], N, sizeof(int), cmp);
	permute(N, num);
	return 0;
	}
