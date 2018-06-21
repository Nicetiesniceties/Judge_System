#include<stdio.h>
int check(int mine[11][11], int x, int y);
void dfs(int mine[11][11]);
int map[11][11];
int main(void)
{
	int mine[11][11] = {0};
	for(int i = 1; i < 10; i++)for(int j = 1; j < 10; j++)scanf("%d", &map[i][j]);
	dfs(mine);
	return 0;
}
int check(int mine[11][11], int x, int y)
{
	int sum = 0;
	for(int i = -1; i <= 1; i++)for(int j = -1; j <= 1; j++)
}
void dfs(int mine[11][11])
{
		
}
