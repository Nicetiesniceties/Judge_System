#include<stdio.h>
#include<stdlib.h>
int map[400][400], M, N, result[80001];
int cmp(const void* a, const void* b){
	return *(int *)b - *(int *)a;
	}
void lakescale(int x, int y, int lakeNumber){
	map[y][x] = 0;
	result[lakeNumber]++;
	if(x + 1 < N)if(map[y][x + 1] == 1)lakescale(x + 1, y, lakeNumber);
	if(x - 1 >= 0)if(map[y][x - 1] == 1)lakescale(x - 1, y, lakeNumber);
	if(y + 1 < M)if(map[y + 1][x] == 1)lakescale(x, y + 1, lakeNumber);
	if(y - 1 >= 0)if(map[y - 1][x] == 1)lakescale(x, y - 1, lakeNumber);
	}
int main(void)
{
	int lakeNumber = 0;
	scanf("%d%d", &M, &N);
	for(int y = 0; y < M; y++)
		for(int x = 0; x < N; x++)
			scanf("%d", &map[y][x]);
	for(int y = 0; y < M; y++)
		for(int x = 0; x < N; x++)
			if(map[y][x] == 1){
				lakescale(x, y, lakeNumber);
				lakeNumber++;
				}
	qsort(result, lakeNumber, sizeof(int), cmp);
	for(int i = 0; i < lakeNumber; i++)
		printf("%d\n", result[i]);
	return 0;	
	}
