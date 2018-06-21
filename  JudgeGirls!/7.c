#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if(n % 15 == 0 && n % 7 != 0)
		printf("%d", 0);
	else
		printf("%d", 1);
	return 0;
}
