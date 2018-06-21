int count(int *deck[]){
	int i = 0;
	while(deck[i] != NULL)
		i++;
	return i;
	} 
int half(int n){
	if(n % 2 == 0)return n / 2;
	else return n / 2 + 1;
	}
void shuffle(int *deck[]){
	int halves[10000];
	int ordinal = 0, n = count(deck), mid = half(n);
	for(int i = 0; i < n; i++)
		halves[i] = *deck[i];
	for(int i = 0; 2 * i < n; i++)
		*deck[2 * i] = halves[i];
	for(int i = 0; 2 * i + 1 < n; i++)
		*deck[2 * i + 1] = halves[i + mid];
	}
void print(int *deck[]){
	int n = count(deck);
	for(int i = 0; i < n; i++)
		printf("%d%c", *deck[i], " \n"[i == n - 1]);
	}
