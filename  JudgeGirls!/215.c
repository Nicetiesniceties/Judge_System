#ifdef algorithm
2 X + 2 Y + 2 Z = 2a
2 X + 4 Y + 8 Z = b
X + Y = c

Z = a - c
Y = (b - 2 a - 6 Z) / 2
X = c - Y
#endif
#include<stdio.h>
int main(void)
{
	int chicken, rabbit, crab, head, leg, tail;
	scanf("%d%d%d", &head, &leg, &tail);
	crab = head - tail;
	if(leg % 2 != 0){
		printf("%d", 0);
		return 0;
	}		
	rabbit = (leg - 2 * head - 6 * crab) / 2;
	chicken = tail - rabbit;
	if(chicken < 0 || rabbit < 0 ||crab < 0){
		printf("%d", 0);
		}
	else{
		printf("%d\n%d\n%d", chicken, rabbit, crab);
	}
} 
