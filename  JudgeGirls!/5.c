#include<stdio.h>
int main(void)
{
	int w, l, d;
	scanf("%d%d%d", &w, &l, &d);
	printf("%d\n%d", 2 * (w * l + l * d + d * w), w * l * d);
	return 0;
}
