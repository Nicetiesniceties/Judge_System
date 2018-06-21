#include<stdio.h>
int gcd(int a, int b){
	while(a % b != 0){
		int temp;
		temp = a;
		a = b;
		b = temp % b;
		}
	return b;
	}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
	}
int main(void)
{
	int a, b;
	scanf("%d", &a);
	while(~scanf("%d", &b))a = lcm(a, b);
	printf("%d", a);
	return 0;
	}
