#include<stdio.h>
int a[3];
void distance(int x1, int y1, int x2, int y2, int x3, int y3){
	a[0] = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	a[1] = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
	a[2] = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
	}
void tri_type(int max, int i, int j){
	if(max == j || i == j || i == max)printf("%s\n", "isosceles");
	else if(max - i - j == 0)printf("%s\n", "right");
	else if(max - i - j < 0) printf("%s\n", "acute");
	else printf("%s\n", "obtuse");
	}
int main(void){
	int x[3], y[3];
	int n, temp;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++)
			scanf("%d%d", &x[j], &y[j]);
		distance(x[0], y[0], x[1], y[1], x[2], y[2]);
		#ifdef Debug
			printf("%d %d %d ", a[0], a[1], a[2]);
		#endif
		if(a[1] >= a[0]){
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
			}
		if(a[2] >= a[0]){
			temp = a[0];
			a[0] = a[2];
			a[2] = temp;
			}
		#ifdef Debug
			printf("%d %d %d ", a[0], a[1], a[2]);
		#endif
		tri_type(a[0], a[1], a[2]);
		}
	return 0;
	}
