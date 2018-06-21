#include<stdio.h>
#include<string.h>
#include<limits.h>
#define Min(a, b) (a < b ? a : b)
char s[100][15];
int min = INT_MAX;
int strdis(char a[], char b[], int now){
	if(now > min)return min + 1;
	if(a[0] == '\0' || b[0] == '\0')return strlen(a) + strlen(b);
	else if(a[0] == b[0])return strdis(a + 1, b + 1, now);
	return 1 + Min(strdis(a + 1, b, now + 1),  strdis(a, b + 1, now + 1));
	}
int main(void)
{
	int n = 1, id1, id2;
	while(~scanf("%s", s[n]))n++;
	n--;
	for(int i = 1; i <= n - 1; i++)
		for(int j = i + 1; j <= n; j++){
			int dis = strdis(s[i], s[j], 0); 
			if(dis < min || (dis == min && 1000 * i + j < 1000 * id1 + id2))
				min = dis, id1 = i, id2 = j;
			}
	printf("%d %d %d", min, id1, id2);
	return 0;
	}
