#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<cmath>
#define Max(x, y) (x > y ? x : y)
using namespace std;
int main(void)
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(0);
//basic input
	int N, LOGN, Testcase;
	cin >> N >> Testcase;
	LOGN = floor(log2(N));
	int arr[N], sparse_table[LOGN][N];
	for(int i = 0; i < N; i++)cin >> arr[i];
//sparse table construction
	for(int j = 0; j < N; j++)sparse_table[0][j] = arr[j];
	for(int i = 1; i <= LOGN; i++)
		for(int j = 0; j + (1 << i) <= N; j++)
			sparse_table[i][j] = Max(sparse_table[i - 1][j], sparse_table[i - 1][j + (1 << (i - 1))]);
//query
	while(Testcase--){
		int head, tail, logL;
		cin >> head >> tail;
		logL = (tail != head ? floor(log2(tail - head)) : 0);
		cout << Max(sparse_table[logL][head - 1], sparse_table[logL][tail - (1 << logL)]) << "\n"; 
		}
	return 0;
	}
