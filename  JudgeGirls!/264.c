#include<stdio.h>
#include<assert.h>
int main()
{
	FILE *fp;
	short int max = 0, temp;
	int count[65536] = {0}, n, max_num = 0;
	char filename[256];
	scanf("%s", filename);
	fp = fopen(filename, "rb");
	assert(fp != NULL);
	fread(&n, 4, 1, fp);
	for(int i = 0; i < n; i++){
		fread(&temp, 2, 1, fp);
		count[temp + 32768]++;
		if(count[temp + 32768] > max_num || (count[temp + 32768] == max_num && temp > max)){
			max = temp;
			max_num = count[temp + 32768];
			}
		}
	fclose(fp);
	printf("%hd\n%d", max, max_num);
	return 0;
	}
