#include<limits.h>
int evaluate_f(int *iptr[], int n, int *index)
{
	int max = *index = INT_MIN;
	for(int i = 0; i < n; i++){
		int x = *iptr[i], y = *(iptr[i] + 1);
		int value = 4 * x - 6 * y;
		if(value > max ||(value == max && i < *index))
			max = value, *index = i;
		}
	return max;
	}
