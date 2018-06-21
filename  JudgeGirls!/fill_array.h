void fill_array(int *ptr[], int n){
	int pre = 0, next = 1, order[10000];
	for(int i = 0; i < n; i++)order[i] = i;
	for(int i = 0 ; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(ptr[order[i]] - ptr[order[j]] > 0){
				int temp = order[i];
				order[i] = order[j];
				order[j] = temp;
				}
	for(int i = 0; i < n; i++)*ptr[i] = i;
	while(next < n){
		int now = 1;
		while(now != ptr[order[next]] - ptr[order[pre]]){
			*(ptr[order[pre]] + now) = *ptr[order[pre]] + *ptr[order[next]];
			now++;
			}
		pre++, next++;
		}
	}
