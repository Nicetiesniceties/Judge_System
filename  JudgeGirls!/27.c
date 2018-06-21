#include<stdio.h>
int main(void)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e );
	printf("%d\n", 2 * (a * b + b * c + c * a + 
                       2 * d * (a - 2 * e) + 2 * d * (c - 2 * e) + 2 * d * (b - 2 * e) + 2 * d * (a - 2 * e) + 2 * d * (c - 2 * e) + 2 * d * (b - 2 * e)));
	printf("%d", a * b * c - 2 * (d * (a - 2 * e) * (c - 2 * e) + d * (a - 2 * e) * (b - 2 * e) + d * (b - 2 * e) * (c - 2 * e)));
	return 0;
}
