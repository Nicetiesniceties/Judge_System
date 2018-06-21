#include<stdio.h>
#include<ctype.h>
char vowels[6] = "aeiou";
int isvowel(char c)
{
	c = tolower(c);
	for(int i = 0; i < 5; i++)
		if(c == vowels[i])return 1;
	return 0;
	}
int main(void)
{
	char c;
	int digits = 0, letters = 0, vowels = 0;
	while(~scanf("%c", &c)){
		digits += isdigit(c) ? 1 : 0;
		letters += isalpha(c) ? 1 : 0;
		vowels += isvowel(c);
		}
	printf("%d %d %d %d\n", digits, letters, vowels, letters - vowels);
	return 0;
	}
