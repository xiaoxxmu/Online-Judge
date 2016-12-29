/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int i, j, flag = 0; 
    int *ret = (int *) malloc (2 * sizeof(int)); 
    
    for (i = 0; i < numsSize; i++)
    {
        for (j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ret[0] = i; 
                ret[1] = j; 
                flag = 1; 
                break; 
            }
        }
        if (flag) break; 
    }
    
    return ret; 
}
