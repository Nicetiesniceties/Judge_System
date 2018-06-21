#include<stdio.h>
int main(void)
{
	int spe_num[3], prize_num[3], num, bonus, conum;
	for(int i = 0; i <= 2; i++){
		scanf("%d", &spe_num[i]);
	}
	for(int i = 0; i <= 2; i++){
                scanf("%d", &prize_num[i]);
        }
	while(scanf("%d", &num) != EOF){
		if(num == spe_num[0] || num == spe_num[1] || num == spe_num[2]){
			bonus += 2000000;
			continue;	
		}
                for(int i = 0; i <= 2; i++){
			if(num  == prize_num[i]){
				bonus += 200000;
				break;
			}
			else if(num % 10000000 == prize_num[i] % 10000000){
				bonus += 40000;
				break;
			}
			else if(num % 1000000 == prize_num[i] % 1000000){
				bonus += 10000;
				break;
			}
			else if(num % 100000 == prize_num[i] % 100000){
				bonus += 4000;
				break;
			}
			else if(num % 10000 == prize_num[i] % 10000){
				bonus += 1000;
				break;
			}
			else if(num % 1000 == prize_num[i] % 1000){
				bonus += 200;
				break;
			}
		}
	} 
	printf("%d",bonus);      
	return 0;
}
