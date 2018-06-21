#include<stdio.h>
int main(void)
{
	int N, M, t[1000001], s[1000001], countertime[1025], waitingsec = 0;
	scanf("%d%d", &N, &M);
	for(int i = 1; i <= M; i++)
		scanf("%d%d", &t[i], &s[i]);
	for(int i = 1; i <= N; i++)
		countertime[i] = 0;
	for(int i = 1; i <= M; i++){
		int min = 1;
		for(int j = 1; j <= N; j++)
			if(countertime[min] >= countertime[j])min = j;
		if(countertime[min] > t[i])waitingsec += countertime[min] - t[i];
		if(countertime[min] <= t[i])countertime[min] = t[i];
		countertime[min] += s[i];
		}
	printf("%d", waitingsec);
	return 0;
	}
