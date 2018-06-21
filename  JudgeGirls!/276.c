#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_trifle(char *a){
	if(!(strcmp(a, "of") * strcmp(a, "and") * strcmp(a, "the") * strcmp(a, "at") * strcmp(a, "of.") * strcmp(a, "and.") * strcmp(a, "the.") * strcmp(a, "at.")))return 1;
	return 0;
	}
int main(void)
{
	char a[128];
	while(scanf("%s", a) != EOF){
		if(!is_trifle(a))printf("%c", toupper(a[0]));
		if(a[strlen(a) - 1] == '.')printf("\n");
		}
	return 0;
	}
