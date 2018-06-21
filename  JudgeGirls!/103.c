#include<stdio.h>
void compute(double N, double array[][20], double result[], double answer[], int count){
	answer[count] = result[count] / array[count][count];
	for(int i = 0; i < N; i++)
		result[i] -= answer[count] * array[i][count];
	if(count == 0)return;
	compute(N, array, result, answer, count - 1);
	}
int main(void)
{
	double N, array[20][20], result[20], answer[20]; 
	scanf("%lf", &N);
	for(int y = 0; y < N; y++)
		for(int x = 0; x < N; x++)
			scanf("%lf", &array[y][x]);
	for(int i = 0; i < N; i++)
		scanf("%lf", &result[i]);
	compute(N, array, result, answer, N - 1);	
	for(int i = 0 ; i < N; i++)
		printf("%.6lf\n", answer[i]);
	return 0;
	}
