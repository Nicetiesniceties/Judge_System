#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int con_one(char *a, char *b){
	if(strlen(a) != strlen(b))return 0;
	for(int i = 0; i < strlen(a); i++)
		for(int j = 0; j < strlen(a); j++){
			if(a[i] == b[j] && a[i] != b[i] && a[j] != b[j]){
				char t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				for(int h = 0; h < strlen(a); h++)
					if(a[h] != b[h])return 0;
				return 1;
				}
			}
	return 0;
	}
int con_two(char *a, char *b){
	if(strlen(a) - strlen(b) != 1 && strlen(a) - strlen(b) != -1)return 0;
	if(strlen(a) - strlen(b) == -1){
		char *t;
		t = a; 
		a = b; 
		b = t;
		}
	int deleted = 0;
	for(int i = 0; i < strlen(b); i++){
		if(!deleted)
			if(a[i] != b[i])deleted = 1;
		if(deleted)
			if(a[i + 1] != b[i])return 0;
		}
	return 1;
	}
int same(char *a, char *b){
	if(strlen(a) != strlen(b))return 0;
	for(int i = 0; i < strlen(a); i++)
		if(a[i] != b[i])return 0;
	return 1;
	}
int main(void)
{
	char a[80], b[80];
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%s%s", a, b);
		if(con_one(a, b) + con_two(a, b) + same(a, b) >= 1)printf("%s\n", "yes");
		else printf("%s\n", "no");
		}
	return 0;
	}
