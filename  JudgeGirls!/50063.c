#include<stdio.h>
#include<string.h>
int N, M, relation[20][20] = {0}, min = 100;
char result[20];
int dis(char test[], int maxdis, int pos){
    for(int i = 0; pos - i > maxdis; i++)
        if(relation[test[i] - 'A'][test[pos] - 'A'])
            maxdis = pos - i;
    return maxdis;
    }
void sit(int pos, int maxdis, char test[], int seated[]){
    int tempseated[20] = {0};
	char temptest[20];
    strcpy(temptest, test);    
    maxdis = dis(test, maxdis, pos - 1);
    if(maxdis > min)return;
	if(pos == N){
		if(maxdis < min || (maxdis == min && strcmp(test, result) < 0)){
        	min = maxdis;
        	strcpy(result, test);    
        	}
		return;
		}
	for(int i = 0; i < N; i++)
		tempseated[i] = seated[i];
	for(int i = 0; i < N; i++)
        if(seated[i] == 0){
			temptest[pos] = 'A' + i;
			temptest[pos + 1] = '\0';
			tempseated[i] = 1;
            sit(pos + 1, maxdis, temptest, tempseated);
            tempseated[i] = 0;
            temptest[pos] = '\0';
            }
    }
int main(void)
{
    scanf("%d %d\n", &N, &M);
    for(int i = 0; i < M; i++){
        char a, b; 
        scanf("%c %c\n", &a, &b);
        relation[a - 'A'][b - 'A'] = 1;
        relation[b - 'A'][a - 'A'] = 1;
        }
    char test[20];
    int seated[20] = {0};
    sit(0, 0, test, seated);
    printf("%d\n", min);
	for(int i = 0; i < N; i++)
		printf("%c%c", result[i], " \n"[i == N - 1]);
	return 0;
	}
