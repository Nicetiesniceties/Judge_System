#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n%d\n%d", num / 100, (num % 100)/ 10, num % 10);
	return 0;
}
