/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target)
{
	for(int i = 0; i < numsSize- 1; i++)
	{
		for(int j = i + 1; j < numsSize; j++)
		{
			if(nums[i] + nums[j] == target)
            {
                int * a = (int * )malloc(2 * sizeof(int));
                a[0] = i, a[1] = j;
				return(a);
            }
        }
	}
	return NULL;
}
