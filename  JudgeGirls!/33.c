#include<stdio.h>
int main(void)
{
	int a[102][102] = {{}}, intersection = 0, T_junction = 0, turn = 0, dead_end = 0, n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1)
				intersection++;
			else if((a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 0))
				T_junction++;
			else if((a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 0))
				turn++;
			else if((a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 1))
				dead_end++;
		}
	}	
	printf("%d\n%d\n%d\n%d", intersection, T_junction, turn, dead_end);
	return 0; 
}
