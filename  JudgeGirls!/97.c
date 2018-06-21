#include <stdio.h>
#include <stdlib.h>
int dis(int x, int y, int X, int Y){
	return abs(X - x) + abs(Y - y);
	}
int main(void)
{
	int N, M, X[10], Y[10], Ca[10], Result[10] = {};
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
		scanf("%d%d%d", &X[i], &Y[i], &Ca[i]);
	scanf("%d", &M);
	for(int i = 0; i < M; i++){
		int x, y, near = 0;
		scanf("%d%d", &x, &y);
		for(int j = 0; j < N; j++){
			while(Ca[near] == 0)near++;
			if(dis(x, y, X[near], Y[near]) > dis(x, y, X[j], Y[j]) && Ca[j] != 0)
				near = j;
			else if(dis(x, y, X[near], Y[near]) == dis(x, y, X[j], Y[j]) && Ca[j] != 0){
				if(X[j] < X[near])
					near = j;
				else if(X[j] == X[near] && Y[j] < Y[near])
					near = j;
				}
			} 
		Result[near]++;
		Ca[near]--;
	}
	for(int i = 0; i < N; i++)
		printf("%d\n", Result[i]);
	return 0;	
	}
