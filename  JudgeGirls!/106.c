#include<stdio.h>
int main(void)
{
	char c;
	int a[3] = {0, 0, 0}, i = 1;//a[-1] represent odd digits, while a[1] represent even digits
	do{
		scanf("%c", &c);
		if(c == '\n'){
			printf("%s%s%s%s", a[2] % 2 ? "no ":"yes ", (a[1] + a[0]) % 3 ? "no ":"yes "
			, a[2] % 5 ? "no ":"yes ", (a[0] - a[1]) % 11 ? "no\n":"yes\n");
			a[1] = a[2] = a[0] = 0;
			}
		else{
			a[i] += c - 48;
			i = (i + 1) % 2;
			a[2] = c - 48;
			}
		}while(c != '-');
	return 0;
	}
