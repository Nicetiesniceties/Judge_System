#include<stdio.h>
int is_leap(int year){
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	return 0;
	}
int day_of_month(int a, int year){
	switch(a){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 2:{
			if(is_leap(year))return 29;
			else return 28;
			}
		default:
			return 30;
		}
	}
int main(void)
{
	int year, n, first_day;
	scanf("%d%d%d", &year, &first_day, &n);
	for(int i = 0; i < n; i++){
		int month, day, count = first_day;
		scanf("%d%d", &month, &day);
		if(month < 1 || month > 12){
			printf("%d\n", -1);
	   		continue;
			}	
		else if(day > day_of_month(month, year) || day < 1){
			printf("%d\n", -2);
			continue;
			}
		for(int j = 1; j < month; j++)
			count += day_of_month(j, year);
		printf("%d\n", (count + day - 1) % 7);
		}
	return 0;
	}
