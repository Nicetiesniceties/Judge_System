#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int N;
int distance(char *string, char **group){
	int count = 0;
	for(int j = 0; j < N; j++)
		count += abs(string[j] - group[j]);
	return count;
    }
int belongs_to(char *string, char **group){
	int d = 20000, turnout;;
	for(int i = 1; i <= 3; i++){
		if(d > distance(string, group[i][0])){
			turnout = i;
			d = distance(string, group[i][0]);
			}
		else if(d == distance(string, group[i][0]) && strcmp(group[i][0], group[turnout][0]) < 0){
			turnout = i;
            d = distance(string, group[i][0]);		   
			}
 		}
	return turnout;
	}
int main(void)
{
	int  L, R, g_num[4] = {1, 1, 1, 1};
	scanf("%d%d%d", &N, &L, &R);
    char string[51][11], g[4][51][11];
    for(int i = 0; i < N; i++)
    	scanf("%s", string[i]);
	for(int c = 0; c < R; c++){
		if(c = 0){
	        for(int i = 0; i < 3; i++)
		        strcpy(g[i + 1][0], string[i]);
			for(int i = 0; i < N; i++){
	 	        strcpy(g[belongs_to(string[i], g)][g_num[belongs_to(string[i], g)]], string[i]);
		        g_num[belongs_to(string[i], g)]++;
	            }
		    continue;
			}
		else{
			char mean[4][1][11];
			for(int i = 1; i <= 3; i++){
				for(int t = 0; t <= N; t++){
					int count = 0;
					for(int j = 1; j <= g_num[i]; j++){
						count += g[i][j][t];
						}
					mean[i][0][t] = count / g_num[i];
		            }
				}
			for(int i = 1; i <= 3; i++){
				int d = 20000, turnout;
				for(int j = 1; i <= g_num[i]; j++){
					if(d > distance(g[i][j], mean[i][0])){
						turnout = j;
						d = distance(g[i][j], mean[i][0]);
						}
					else if(d == distance(g[i][j], mean[i][0]) && strcmp(g[i][j], g[i][turnout]) < 0){
						turnout = j;
						d = distance(g[i][j], mean[i][0]);
						}
					}
					strcpy(g[i][0], g[i][turnout]);
				}
			for(int i = 0; i < 4; i++)
				g_num[i] = 1;
			for(int i = 0; i < N; i++){
				strcpy(g[belongs_to(string[i], g)][g_num[belongs_to(string[i], g)]], string[i]);
				g_num[belongs_to(string[i], g)]++;
				}
			}
		}
	printf("%s\n%s\n%s", g[1][0], g[2][0], g[3][0]);
	return 0;
}
