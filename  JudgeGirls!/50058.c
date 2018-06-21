#include<stdio.h>
#include<limits.h>
#include<string.h>
int N, cost[20], min = INT_MAX;
char string[20][51], enough[] = "abcdefghijklmnopqrstuvwxyz";
void select(int count, char alphabet[], int CostSum){
	if(CostSum > min)return;
	if(strcmp(enough, alphabet) == 0){
		if(CostSum < min)min = CostSum;
		return;
		}
	if(count == N)return;
	select(count + 1, alphabet, CostSum);
	char temp[27];
	strcpy(temp, alphabet);	
	for(int i = 0; i < strlen(string[count]); i++)
		temp[string[count][i] - 'a'] = string[count][i];
	select(count + 1, temp, CostSum + cost[count]);
	}
int main(void)
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
		scanf("%s%d", string[i], &cost[i]);
	char alphabet[] = "00000000000000000000000000";	
	select(0, alphabet, 0);
	printf("%d", min);
	return 0;
	}
