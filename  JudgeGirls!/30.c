#include<stdio.h>
int X, Y, map[13][13];
int path(int X, int Y){
	if(X < 1 || Y < 1 || map[Y][X] == 0)return 0;
	else if(X == 1 && Y == 1)return 1;
	else return path(X - 1, Y) + path(X, Y - 1);
	}
int main(void)
{
	scanf("%d%d", &Y, &X);	
	for(int i = Y; i >= 1; i--)
		for(int j = 1; j<= X; j++)
			scanf("%d", &map[i][j]);
	printf("%d", path(X, Y));
	return 0;
	}
