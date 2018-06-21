#include <stdio.h>
int M, N, x[4] = {1, 0, -1, 0}, y[4] = {0, -1, 0, 1}, map[102][102];
void surround(int *i, int *j, int *count){
	*i += y[*count % 4];
	*j += x[*count % 4];
	if(((*i == 0) + (*j == 0) + (*i == (N + 1)) + (*j == (M + 1))) == 2){
		(*count)++;
		*i += y[*count % 4];
		*j += x[*count % 4];
		}
	}
int main(void)
{
   	int i, j, num = 0, count = 0;
	scanf("%d%d", &M, &N);
	for(i = 1; i <= N; i++)
		for(j = 1; j <= M; j++)
			scanf("%d", &map[i][j]);
	for(i = N + 1, j = 0; num < 2 * (M + N);){
		surround(&i, &j, &count);
		map[i][j] = num;
		num++;
		}
	for(i = N + 1, j = 1; j <= M; j++){
		int dx = j, dy = i;
		count = 1;
		while(dy != 0 && dx != M + 1){
			dy += y[count % 2];
			dx += x[count % 2];
			if(map[dy][dx] == 1)count++;
			}
		int temp = map[i][j];
		map[i][j] = map[dy][dx];
		map[dy][dx] = temp;
		}
	for(i = N, j = 0; i >= 1; i--){
		int dx = j, dy = i;
		count = 0;
		while(dy != 0 && dx != M + 1){
			dy += y[count % 2];
			dx += x[count % 2];
			if(map[dy][dx] == 1)count++;
			}
		int temp = map[i][j];
		map[i][j] = map[dy][dx];
		map[dy][dx] = temp;
		}
	num = count = 0;
	for(i = N + 1, j = 0; num < 2 * (M + N);){
		surround(&i, &j, &count);
		printf("%d\n", map[i][j]);
		num++;
		}
	return 0;
	}
