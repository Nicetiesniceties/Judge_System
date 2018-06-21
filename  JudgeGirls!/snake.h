void snake(const int *ptr_array[100][100], int m){
	const int *ordical[10000];
	int dir = 1;
	for(int x = 0; x < m; x++)
		for(int y = 0; y < m; y++){
			ordical[y + x * m] = ptr_array[x][y];
		}
	for(int x = 0; x < m * m; x++)
		for(int y = x; y < m * m; y++){
			if(*ordical[x] >= *ordical[y]){
				const int *temp;
				temp = ordical[x];
				ordical[x] = ordical[y];
				ordical[y] = temp;
				}
			}
	for(int x = 0; x < m; x++){
		if(dir){
			for(int y = 0; y < m; y++)
				ptr_array[x][y] = ordical[y + x * m];
			dir = 0;
			}
		else{
			for(int y = 0; y < m; y++)
				ptr_array[x][m - 1 - y] = ordical[y + x * m];
			dir = 1;
			}
		}
	}
