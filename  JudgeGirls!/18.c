#include<stdio.h>
#include<limits.h>
int main(void)
{
    int x, y, a[102][102];
    scanf("%d%d", &y, &x);
    for(int i = 0; i <= y + 1; i++)
        for(int j = 0; j <= x + 1; j++){
            if(i * j == 0 || i == y + 1 || j == x + 1)a[i][j] = INT_MIN;
            else scanf("%d", &a[i][j]);
            }
    for(int i = 1; i <= y; i++)
        for(int j = 1; j <= x; j++)
            if(a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
                printf("%d\n", a[i][j]);
    return 0;
    }
