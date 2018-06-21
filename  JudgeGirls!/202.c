#include<stdio.h>
int gcd(int a, int b)
{
	int temp;
	while(a % b != 0){
		temp = b;
		b = a % b;
		a = b;
	}
	return b;
}
int main(void)
{
	int a1, b1, c1, a2, b2, c2;
	scanf("%d%d%d%d%d%d%d", a1, b1, c1, a2, b2, c2);
	b1 = b1 + a1 * c1;
	b2 = b2 + a2 * c2;
	return 0;
}
