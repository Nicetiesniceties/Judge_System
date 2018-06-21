#include<stdio.h>
int main(void)
{
	char input;
	int ASCII[127] = {0};
	while(~scanf("%c", &input))
		if(input <= 122 && input >= 65)ASCII[input]++;
	for(int i = 0; i < 26; i++)
		printf("%d\n", (ASCII[65 + i] + ASCII[97 + i]));
	return 0;
	}
