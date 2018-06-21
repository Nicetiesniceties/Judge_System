#include<stdio.h>
int D, limA, limB, limC, A, B, C, lotion;
int deploy(int a, int b, int c){
	if(D == a * A + b * B + c * C)return 1;
	else if(a > limA || b > limB || c > limC)return 0;
	else {
		printf("a = %d b = %d c = %d\n", a, b, c);
		return deploy(a + 1, b, c) + deploy(a, b + 1, c) + deploy(a, b, c + 1);
		}
	}
int main(void)
{
	int N;
	scanf("%d", &N);
	while(N--){
		lotion = 0;
		scanf("%d%d%d%d%d%d%d", &D, &limA, &limB, &limC, &A, &B, &C);
		lotion = deploy(0, 0, 0);
		printf("%s\n", lotion ? "yes" : "no");
		}
	return 0;
	}
//#include <stdio.h>
 
 int D, a, b, c, A, B, C, done;
 void lotion(int mp, int stg){
	     if (done) return;
		     switch (stg){
				         case 2:
						             if (!c || !C) return;
									             if (mp % C == 0 && mp / C <= c){
													                 done = 1; return;
																	             }
																				             break;
																							         case 1:
																									             for (int i = 0; i <= b && mp >= 0; i++){
																													                 if (!mp){
																																		                     done = 1; return;
																																							                 }
																																											                 lotion(mp, stg+1);
																																															                 mp -= B;
																																																			             }
																																																						             break;
																																																									         case 0:
																																																											             for (int i = 0; i <= a && mp >= 0; i++){
																																																															                 if (!mp) {
																																																																				                     done = 1; return;
																																																																									                 }
																																																																													                 lotion(mp, stg+1);
																																																																																	                 mp -= A;
																																																																																					             }
																																																																																								             break;
																																																																																											     }
 }
 int main(){
	     int n;
		     scanf("%d", &n);
			     while (n--){
					         scanf("%d%d%d%d%d%d%d", &D, &a, &b, &c, &A, &B, &C);
							         done = 0;
									         lotion(D, 0);
											         if (done) printf("yes\n");
													         else printf("no\n");
															     }
																     return 0;
 }
