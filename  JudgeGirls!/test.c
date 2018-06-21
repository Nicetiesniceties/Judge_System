#include <stdio.h>
#include <string.h>
#include <stdlib.h>//atoi
void plus(int *i){
	*i = 1;
	}
int main(void)
{
	//int i = 0, a[] ={1, 2, 3, 4, 5, 6};
	//int size = sizeof(a) / sizeof(a[0]);

		//printf("%d", size);
	//int i = 0;
	//plus(&i);
	//printf("%d", i);
	//printf("%*s", 10, " ");//* == 0 still printf " "
	//printf("%p", "...");
	//int a[30];
	//a[0] = 0;
	//printf("%u", sizeof(a) / sizeof(a[0]));
	int a = 1, b = 2;
	int *ptr_a = &a, *ptr_b = &b, *ptr_aa = &a;
	printf("%d", ptr_a == ptr_aa);
	return 0;
	}
