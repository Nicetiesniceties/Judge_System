#include<stdio.h>
int main(void)
{
	int a, b, c, temp;
	scanf("%d%d%d", &a, &b, &c);
	if(b > a){
		temp = a;
		a = b;
		b = temp;
	}
	if(c > a){
		temp = a;
		a =c;
		c = temp;
	}
	if(a < b + c)
		printf("%d", 1);
	else
		printf("%d", 0);
	return 0;
}
