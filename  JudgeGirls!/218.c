#include<stdio.h>
int c(int a, int b);

int c(int a, int b)
{	
	if(b == 0)return 1;
	int count = 1; 
	for(int devide = 1 ; devide <= b; devide++){
		count *= a;
		a--;
		count /= devide;
		}
	return count;
	}

int main(void)
{
	int a, b, count = 0;
	scanf("%d%d", &a, &b);
	for(int i = 0; i <= b; i++){
		count += c(a, i);
		}
	printf("%d\n", count);
	return 0;
	}
