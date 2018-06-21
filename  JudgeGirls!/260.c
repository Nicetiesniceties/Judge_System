#include <stdio.h>
#include <string.h>
int identical(char *a, char *b){
	int count = 0;
	char temp[128];
	for(int start = strlen(a) - 1, len = 1; start >= 0 && len <= strlen(b); start--, len++){
			strcpy(temp, b);
			temp[len] = '\0';
			if(strcmp(&a[start], temp) == 0)count = len;
		}
	return count;
	}
int main(void)
{
	char a[128], result[128];
	while(scanf("%s", a) != EOF)
	{
		result[strlen(result) - identical(result, a)] = '\0';
		strcat(result, a);
		}
	printf("%s", result);
	return 0;
	}
