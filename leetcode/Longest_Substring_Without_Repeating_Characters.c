#include<stdio.h>
int lengthOfLongestSubstring(char* s)
{
	int start, end, max = 1;
	for(start = 0, end = 1; end < sizeof(s) - 1; end++)
	{
		printf("---\nstart = %d, end = %d\n", start, end);
		for(int i = start; i < end; i++)
			if(s[end] == s[i])
				start = i + 1;
		if(end >= (int)(sizeof(s) - 1))
			return max;;
		printf("After checking: start = %d, end = %d\n", start, end);
		int curr = end - start + 1;
		if(curr > max)
			max = curr;
	}
	return max;
}
int main()
{
	char s[] = "bbbbb";
	printf("len(s) = %lu", sizeof(s));
	int ans = lengthOfLongestSubstring(s);
	printf("ans = %d\n", ans);
	return 0;
}
