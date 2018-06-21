#include<iostream>
#include<climits>
typedef struct point{
	int x, y;
	}Point;
int area(Point *UpperRightmost, Point *LowerLeftmost){
	return (UpperRightmost->y - LowerLeftmost->y) * (UpperRightmost->x - LowerLeftmost->x);
	}
int main(void)
{
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	Point *UpperRightmost = new(Point), *LowerLeftmost = new(Point), *temp = new(Point);
	UpperRightmost->x = UpperRightmost->y = INT_MIN;
	LowerLeftmost->x = LowerLeftmost->y = INT_MAX;
	while(std::cin >> temp->x >> temp->y){
		if(temp->x > UpperRightmost->x)UpperRightmost->x = temp->x;
		if(temp->y > UpperRightmost->y)UpperRightmost->y = temp->y;
		if(temp->x < LowerLeftmost->x)LowerLeftmost->x = temp->x;
		if(temp->y < LowerLeftmost->y)LowerLeftmost->y = temp->y;
		}
	std::cout << area(UpperRightmost, LowerLeftmost);
	return 0;	
	}
