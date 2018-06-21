#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
	int begin = 0, midspace = 0;
	char c;
	while(~scanf("%c", &c)){
		if(begin == 0 && isspace(c))continue;
		else if(c == '\n'){begin = 0; midspace = 0; printf("\n");}
		else if(!isspace(c) && !midspace){begin = 1; printf("%c", c);}
		else if(begin == 1 && isspace(c))midspace++;
		else if(!isspace(c) && midspace){printf("%*c%c", midspace, ' ', c); midspace = 0;}
		}
	return 0;
	}
