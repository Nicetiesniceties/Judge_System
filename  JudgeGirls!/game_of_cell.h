void game_of_cell(int grid[50][50],int outcome[50][50], int N){
	int operating[52][52];
	for(int i = 0; i < 52; i++)
		for(int j = 0; j < 52; j++){
			if(i == 0 || i == 51)operating[i][j] = 3;
			else if(j == 0 || j == 51)operating[i][j] = 3;
			else operating[i][j] = grid[i - 1][j - 1];
			}
	for(int n = 0; n < N; n++)
		for(int i = 1; i <= 50; i++)
			for(int j = 1; j <= 50; j++){
				int dead = 0, dying = 0, healthy = 0;
				for(int a = i - 1; a <= i + 1; a++)
					for(int b = j - 1; b <= j + 1; b++){
							if(a == i && b == j)continue;
							switch(operating[a][b]){
								case 0:
									dead++;
									break;
								case 1:
									dying++;
									break;
								case 2:
									healthy++;
									break;
								}
						}
				if(healthy < 2 && operating[i][j] == 2)operating[i][j] = 0;
				else if((healthy == 2 || healthy == 3) && operating[i][j] == 2)operating[i][j] = 2;
				else if(healthy > 3 && operating[i][j] == 2)operating[i][j] = 1;
				else if(healthy == 3 && operating[i][j] == 0)operating[i][j] = 2;
				else if(healthy != 3 && operating[i][j] == 0)operating[i][j] = 0;
				else if(healthy == 2 && operating[i][j] == 1)operating[i][j] = 2;
				else if(healthy != 2 && operating[i][j] == 1)operating[i][j] = 1;
				}
	for(int i = 1; i <= 50; i++)
		for(int j = 1; j <= 50; j++)
			outcome[i - 1][j - 1] = operating[i][j];
	}
