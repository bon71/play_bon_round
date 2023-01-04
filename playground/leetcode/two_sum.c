#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int     a, b;
    int*    result;

    *returnSize = 2;
    result = (int *)malloc(sizeof(int) * *returnSize);
    if (returnSize == NULL)
        exit (0);
    for (a = 0; a < numsSize - 1; a++)
    {
        for (b = a + 1; b < numsSize; b++)
        {
            if (target == nums[a] + nums[b])
            {
                result[0] = a;
                result[1] = b;
                return (result);
            }
        }
    }
    return (result);
}