#include<stdio.h>
#include<limits.h>
#define min(a, b) (a < b ? a : b)
int N, min = INT_MAX, cost[15][15];
void travel(int pre, int visited[], int count, int sum){
	int tempvisited[15];
	for(int i = 0; i < N; i++)
		tempvisited[i] = visited[i];
	if(count == N){
		if(min > sum + cost[pre][0])min = sum + cost[pre][0];
		return;
		}
	if(sum > min)return;
	for(int i = 1; i < N; i++)
		if(visited[i] == 0){
			tempvisited[i] = 1;
			travel(i, tempvisited, count + 1, sum + cost[i][pre]);
			tempvisited[i] = 0;
			}
	}
int main(void)
{
	scanf("%d", &N);
	for(int y = 0; y < N; y++)
		for(int x = 0; x < N; x++){
			scanf("%d", &cost[y][x]);
			cost[x][y] = cost[y][x];
		}
	int visited[15] = {0};	
	travel(0, visited, 1, 0);
	printf("%d", min);
	return 0;
	}
