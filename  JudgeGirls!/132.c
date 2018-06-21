#include<stdio.h>
#include<stdlib.h>
int result[9][21] = {0}, color_value[21] = {0}, color_order[21], N, C, map[21][21] = {0};
int cmp(const void *a, const void *b){
	return(color_value[*(int*) b] - color_value[*(int*) a]);
	}
void color(int count){
	if(count == N + 1){
		for(int n = 1; n <= N; n++)
			for(int c = 1; c <= C; c++)
				if(result[c][n] == 1)printf("%d\n", c);
		}
	else{
		int col = 1;
		for(int i = 1; i <= N; i++)
			if(map[i][color_order[count]] == 1 && result[col][i] == 1){col++; i = 0;}
		if(col > C)printf("no solution.\n");
		else{
			result[col][color_order[count]] = 1;
			color(count + 1);
			}
		}
	}
int main(void)
{
	int P;
	scanf("%d%d%d", &N, &C, &P);
	for(int i = 1; i <= N; i++)
		color_order[i] = i;
	for(int i = 1; i <= P; i++){
		int m, n;
		scanf("%d%d", &m, &n);
		map[m + 1][n + 1] = map[n + 1][m + 1] = 1;
		color_value[m + 1]++;
		color_value[n + 1]++;
		}
	qsort(&color_order[1], N, sizeof(int), cmp);	
	color(1);
	return 0;
	}
