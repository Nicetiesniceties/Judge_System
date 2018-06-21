#include<stdio.h>
int a[101]; 

int check_palindrome(int start, int final){
	for(; start <= final; start++, final--){
		if(a[start] != a[final])return 0;
		}
	return 1;
	}
int check_double(int start, int final){
	for(int i = start; i < final; i++){
		if(check_palindrome(start, i) && check_palindrome(i + 1, final))return 1;
		}
	return 0;
	}

int main(void)
{
	int i = 0, start = 0, final;
	int sta = 0, fin = 0;
	while(~scanf("%d", &a[i]))i++;
	for(; start < i - 1; start++){
		for(final = start + 1; final < i; final++){
			if(check_double(start, final) && (final - start) >= (fin - sta)){
				sta = start; fin = final;
				}
			}
		}
	for(int j = sta; j <= fin; j++){
		printf("%d%c", a[j], " \n"[j == fin]);
		}
	return 0;
}
