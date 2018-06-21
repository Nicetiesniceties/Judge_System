#include<stdio.h>
long long checkedX[65536], checkedY[65536], checkedN;
int included(long long x, long long y, long long cx, long long cy, long long r){
	if((x - cx) * (x - cx) + (y - cy) * (y - cy) <= r * r)return 1;
	return 0;
	}
int check(long long x, long long y){
	for(int i = 1; i <= checkedN; i++)
		if(x == checkedX[i] && y == checkedY[i])return 0;
	return 1;
	}
int main(void)
{
	long long N, x[3], y[3], r[3];
	scanf("%lld", &N);
	while(N--){
		checkedN = 0;
		int result = 0;
		for(int i = 0; i < 3; i++)
			scanf("%lld%lld%lld", &x[i], &y[i], &r[i]);
		for(int n = 0; n < 3; n++)
			for(long long X = x[n] - r[n]; X <= x[n] + r[n]; X++)
				for(long long Y = y[n] - r[n]; Y <= y[n] + r[n]; Y++)
					if((included(X, Y, x[0], y[0], r[0]) + included(X, Y, x[1], y[1], r[1]) + included(X, Y, x[2], y[2], r[2])) % 2 && check(X, Y)){
							result++;
							checkedN++;
							checkedX[checkedN] = X;
							checkedY[checkedN] = Y;
							}
		printf("%d\n", result);	
		}	
	return 0;
	}
