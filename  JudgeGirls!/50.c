#include<stdio.h>
#define min(a, b) a < b ? a : b;
#define max(a, b) a > b ? a : b;
void ScanSquare(int square[4]){
    for(int i = 0; i < 4; i++)scanf("%d", &square[i]);
    }
void intersect(int a[4], int b[4], int result[4]){
    for(int i = 0 ; i < 2; i++)result[i] = max(a[i], b[i]);
    for(int i = 2 ; i < 4; i++)result[i] = min(a[i], b[i]);
    if(result[2] >= result[0] && result[3] >= result[1])return;
    else result[3] = result[2] = result[1] = result[0] = 0;
    }
int area(int square[4]){
    return (square[3] - square[1]) * (square[2] - square[0]);
    }
int main(void)
{
    int a[4], b[4], c[4], ab[4], bc[4], ca[4], abc[4];
    ScanSquare(a); ScanSquare(b); ScanSquare(c);
    intersect(a, b, ab); intersect(b, c, bc); intersect(c, a, ca); intersect(ab, ca, abc);
    printf("%d", area(a) + area(b) + area(c) - area(ab) - area(bc) - area(ca) + area(abc));    
    return 0;
    }
