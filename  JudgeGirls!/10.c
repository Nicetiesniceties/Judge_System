#include<stdio.h>
int main(void)
{
	int n, i;
	scanf("%d%d", &n, &i);
	int former_n = n;
	if(i - 1 != 0){
		n = n * n;
		i--; 
	}
	else{
		printf("%d", n);
		return 0;	
	}
	if(i - 1 != 0){
		n = n * former_n;
		i--; 
	}
	else{
		printf("%d", n);
		return 0;	
	}
	if(i - 1 != 0){
		n = n * former_n;
		i--; 
	}
	else{
		printf("%d", n);
		return 0;	
	}
	if(i - 1 != 0){
		n = n * former_n;
		i--; 
	}
	else{
		printf("%d", n);
		return 0;	
	}
	if(i - 1 != 0){
		n = n * former_n;
		i--; 
	}
	else{
		printf("%d", n);
		return 0;	
	}
        return 0;
}
