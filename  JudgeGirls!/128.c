void intersection(int map[100][100], int result[4]){
	int a[102][102] = {0};
	for(int i = 0; i < 4; i++)result[i] = 0;
	for(int i = 1; i < 101; i++)
		for(int j = 1; j < 101; j++)
			a[i][j] = map[i - 1][j - 1];
	for(int i = 1; i < 101; i++)
        for(int j = 1; j < 101 ; j++){
            if(a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1)
                result[0]++;
            else if((a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 0))
                result[1]++;
            else if((a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 1) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 0))
                result[2]++;
            else if((a[i][j] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 1 && a[i][j + 1] == 0) || (a[i][j] == 1 && a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 1))
                result[3]++;
        	}  			
	}
