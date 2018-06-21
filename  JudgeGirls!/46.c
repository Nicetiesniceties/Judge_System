#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void mv_backwards(char *result, int N){
	for(int i = strlen(result) - 1; i >= N - 1; i--)
		result[i + 1] = result[i];
	}
void mv_forwards(char *result, int N){
	for(int i = N - 1; i < strlen(result); i++)
		result[i] = result[i + 1];
	}
void insert(char *result){
	char loc[6], word[2];
	scanf("%s", loc);
	if(strcmp(loc, "right") == 0){
		scanf("%s", word);
		strcat(result, word);
		}
	else if(strcmp(loc, "left") == 0){
		scanf("%s", word);
		mv_backwards(result, 0);
		result[0] = word[0];
		}
	else{
		scanf("%s", word);
		mv_backwards(result, atoi(loc));
		result[atoi(loc) - 1] = word[0];
		}
	}
void delete(char *result){
	char loc[6];
	int N;
	scanf("%s", loc);
	if(strcmp(loc, "right") == 0)result[strlen(result) - 1] = '\0';
	else if(strcmp(loc, "left") == 0)mv_forwards(result, 1);
	else mv_forwards(result, atoi(loc));
	}
int main(void)
{
	char result[100000] = "\0", cmd[7];
	while(scanf("%s", cmd) != EOF){
		if(strcmp(cmd, "insert") == 0)insert(result);
		else if(strcmp(cmd, "delete") == 0)delete(result);
		//printf("%s\n", result);
		}
	int cont = 1, longest = 0;
	for(int i = 0; i < strlen(result); i++){
		if(result[i] == result[i - 1] && i != 0)cont++;
		else cont = 1;
		if(cont >= longest)longest = cont;		
		}
	cont = 1;
	for(int i = 0; i < strlen(result); i++){
		if(result[i] == result[i - 1] && i != 0)cont++;
		else cont = 1;
		if(cont == longest)printf("%c ", result[i]);
		}
	printf("%d", longest);
	return 0;
	}
