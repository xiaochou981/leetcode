int* twoSum(int* nums, int numsSize, int target) {
int i,j;
int* return_array;
    for(i=0 ;i<numsSize; i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                 return_array = (int *)malloc(sizeof(int)*2);
                 return_array[0]=i;
                 return_array[1]=j;
                 return return_array;
            }
        }
    }
    return 0;
}
