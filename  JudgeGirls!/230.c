#include<stdio.h>
int W, w[21] = {0}, v[21] = {0}, N, ansV = 0;
void packing(int num, int sumW, int sumV){
	if(sumW > W)return;
	else if(sumV > ansV)ansV = sumV;
	if(num != N){
		packing(num + 1, sumW + w[num + 1], sumV + v[num + 1]);
		packing(num + 1, sumW, sumV);
		}
	}
int main(void)
{
	scanf("%d%d", &N, &W);	
	for(int i = 1; i <= N; i++)scanf("%d%d", &w[i], &v[i]);
	packing(0, 0, 0);
	printf("%d", ansV);
	return 0;
	}
