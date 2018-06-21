#include<stdio.h>
int main(void)
{
	double a, b, c, area;
	scanf("%lf%lf%lf", &a, &b, &c);
	area = c * c * 3.1415926 * 0.75;
	if(c > b){
		area += (c - b) * (c - b) * 3.1415926 * 0.25;
	}
	if(c > a){
		area += (c - a) * (c - a) * 3.1415926 * 0.25;
	}
	printf("%f", area);
	return 0;
}
