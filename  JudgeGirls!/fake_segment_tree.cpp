#include<iostream>
#include<algorithm>
#define Max(x, y) x > y ? x : y
using namespace std;
int a[1 << 20], tree[1 << 20];
void ScanNum(int n){cin >> a[n];}
void build_tree(int L, int R, int num){
    if(L == R){
        tree[num] = a[L - 1]; 
        return;
        }
    int mid = (L + R) / 2;
	build_tree(L, mid, 2 * num);
    build_tree(mid + 1, R, 2 * num + 1);
    tree[num] = Max(tree[2 * num], tree[2 * num + 1]);
    cout << num << " " << tree[num] << "\n";
	}
void query(int L, int R, int num, int H, int T){
    if(L == H && R == T){
        cout << tree[num] << "\n";
        return;
        }
    int mid = (L + R) / 2;
    query(L, mid, 2 * num, H, T);
    query(mid + 1, R, 2 * num + 1, H, T);
    }
int main(void)
{
    std::ios_base::sync_with_stdio(false);
	cin.tie(0);
    int N, testcase, H, T;
    cin >> N >> testcase;
    for(int i = 0; i < N; i++)ScanNum(i);
    build_tree(1, N, 1);
    while(testcase--){
        cin >> H >> T;
        query(1, N, 1, H, T);
        }
    return 0;
    }
