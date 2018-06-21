#include<stdio.h>
#include<string.h>
#include"hangman.h"
int main(void)
{
	int L;
	scanf("%d", &L);
	while(L--){
		int G, GuessNum = 0;
		char answer[1001], Guess[201];
		scanf("%s%d%s", answer, &G, Guess);
		Hangman *game = newGame(answer, G);
		while(1){
			int outcome = guess(game, Guess[GuessNum]);
			GuessNum++;
			printf("%d ", outcome);
			printStatus(game);
			if(outcome == -1){
				printf("You Lose\n");
				break;
				}
			else if(solved(game)){
				printf("You Win\n");
				break;
				}
			else if(GuessNum == strlen(Guess) - 1){
				printf("You Quit\n");
				break;
				}
			}
		}
	return 0;
	}
