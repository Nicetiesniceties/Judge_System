#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void * a, const void * b){
	const char * A = *(const char **) a;
	const char * B = *(const char **) b;
	return strcmp(A, B);
	}
int main(void)
{
	int N, M, I, temp, ingredient_num[100];
	char recipe[100][11][65];
	scanf("%d%d", &N, &M);
	for(int i = 0; i < N; i++){
		scanf("%s%d", recipe[i][0], &ingredient_num[i]);
		for(int j = 1; j <= ingredient_num[i]; j++)
			scanf("%s", recipe[i][j]);
		}
	scanf("%d", &M);
	while(M--){
		char result[10][65], strtemp[65];
		int a, b, count = 0;
		scanf("%s", strtemp);
		for(int i = 0; i < N; i++)
			if(strcmp(recipe[i][0], strtemp) == 0)a = i;
		scanf("%s", strtemp);
		for(int i = 0; i < N; i++)
			if(strcmp(recipe[i][0], strtemp) == 0)b = i;
		for(int i = 1; i <= ingredient_num[a]; i++)
			for(int j = 1; j <= ingredient_num[b]; j++)
				if(strcmp(recipe[a][i], recipe[b][j]) == 0){
					strcpy(result[count], recipe[a][i]);
					count++;
					}
		char *ans[10];
		for(int i = 0; i < count; i++)
			ans[i] = result[i];
		qsort(ans, count, sizeof(char *), cmp);
		for(int i = 0; i < count; i++)
			printf("%s%c", ans[i], " \n"[i == count - 1]);
		if(!count)printf("nothing\n");
		}
	return 0;
	}
