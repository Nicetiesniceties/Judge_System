#include<stdio.h>
int DA, DB, DC, EA, EB, EC, FA, FB, FC, a, b, c;
int making(int a, int b, int c){
	if(a < 0 || b < 0 || c < 0)return 0;
	else if(a == 0 && b == 0 && c == 0)return 1;
	else return making(a - DA, b - DB, c - DC) + making(a - EA, b - EB, c - EC) + making(a - FA, b - FB, c - FC);
	}
void loop(int N){
	if(N){
		scanf("%d%d%d", &a, &b, &c);
		if(making(a, b, c))printf("yes\n");
		else printf("no\n");
		loop(N - 1);
		}
	}
int main(void)
{	
	int N;
	scanf("%d%d%d%d%d%d%d%d%d%d", &DA, &DB, &DC, &EA, &EB, &EC, &FA, &FB, &FC, &N);
	loop(N);
	return 0;
	}
