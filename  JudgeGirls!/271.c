#include<stdio.h>
#define len 200;
int main(void)
{
	int N, M, temp;
	int a[200], b[200], c[200];//a * b = c;
	scanf("%d", &N);
	for(int i = N - 1; i >= 0; i--){scanf("%d", &temp); a[i] = temp;}
	scanf("%d", &M);
	for(int i = M - 1; i >= 0; i--){scanf("%d", &temp); b[i] = temp;}
	for(int i = N + M - 2; i >= 0; i--)c[i] = 0;
	for(int i = 0 ; i < N; i++)
		for(int j = 0; j < M; j++){
			 c[i + j] += a[i] * b[j];
		}
	for(int i = N + M - 2; i > 0; i--)printf("%d ",c[i]);
	printf("%d", c[0]);
	return 0;
	}
