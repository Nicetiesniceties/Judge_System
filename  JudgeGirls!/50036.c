#include <stdio.h>
int K, N, M, result = 0, num[21];
void pickupNum(int sum, int k, int count, int NotRepeat){
	if(k >= K && sum <= M && NotRepeat)
		result++;
	if(count == N)return;
	else{
		pickupNum(sum + num[count + 1], k + 1, count + 1, 1);
		pickupNum(sum, k, count + 1, 0);
		}
	}
int main(void)
{
	scanf("%d%d%d", &K, &N, &M);
	for(int i = 1; i <= N; i++)
		scanf("%d", &num[i]);
	pickupNum(0, 0, 0, 0);
	printf("%d", result);
	return 0;
	}
