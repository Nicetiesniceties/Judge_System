#include <stdio.h>
int hasEOF = 0;
int readchar() {
	static int N = 1<<20;
	static char buf[1<<20], *p = buf, *end = buf;
		if(p == end) {
			if((end = buf + fread(buf, 1, N, stdin)) == buf) {
				hasEOF = 1;
				return EOF;    
				}
			p = buf;
			}
	return *p++;
	}	
int ReadInt(unsigned long long int *x) {
    char c, neg;
	while((c = readchar()) < '-')
		if(c == EOF) return 0;
	neg = (c == '-') ? -1 : 1;
	*x = (neg == 1) ? c-'0' : 0;
	while((c = readchar()) >= '0')
		*x = (*x << 3) + (*x << 1) + c-'0';
	*x *= neg;
	return 1;
	}
int main()
{
	unsigned long long int x, a, check, test;
	int i;
	while (ReadInt(&x)) {
		for(test = 1, i = 0; i < 8; i++, test *= 256){
			if(a / test % 256 == x){
				unsigned long long int temphead = a / test / 256 * test, temptail = a % test;
				a = temphead + temptail;
				break;
				}
			}
		a = a << 8;
		a += x;
		}
	for(i = 0; i < 8; i++){
		printf("%llu ", a / 256 / 256 / 256 / 256 / 256 / 256 / 256);
		a = a << 8;
		}
	return 0;
	}
