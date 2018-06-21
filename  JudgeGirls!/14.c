#include<stdio.h>
int main(void)
{
	int n,a[1001],b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d/n",&b);
		a[i]=b;
	}
	for(int i=n;i>=2;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d/n",a[1]);
	return 0;
}
