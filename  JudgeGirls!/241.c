#include<stdio.h>
int main(void)
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	if((x1 * y2 - x2 * y1) > 0 && (x2 * y3 - x3 * y2) > 0 && (x3 * y4 - x4 * y3) > 0 && (x4 * y1 - x1 * y4) > 0)
		printf("%d", 1);
	else
		printf("%d", 0);	
	return 0;
}
