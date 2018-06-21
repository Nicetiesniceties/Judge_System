#include<stdio.h>
int main(void)
{
	int a, score = 0;
	scanf("%d", &a);
	if(a <= 0){
		printf("%d", -100);
	return 0;
	}
	if(a % 3 == 0){
		score += 3;
	}
	if(a % 5 ==0){
		score +=5;
	}
	if(a >= 100 && a <=200){
		score += 50;
	}
	else{
		score -= 50;
	}
	printf("%d", score);
	return 0;
}
