#include<stdio.h>
int main(void)
{
	int count = 0, num = 0;
	char input[4] = "000";
	scanf("%c%c", &input[0], &input[1]);
	while(~scanf("%c", &input[2])){
		num++;
		input[0] = input[1];	
		input[1] = input[2];
		if(input[0] == '.' && ((input[1] == ' ' && input[2] == ' ') || input[1] == '\n' || input[1] == '\0')){
			count++;
			}
		}
	printf("%d", count);
	return 0;
	}
