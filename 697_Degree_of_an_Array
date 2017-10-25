
int findShortestSubArray(int* nums, int numsSize) {
int counts[50000] = {0};
int last[50000] = {0};
int first[50000] = {0};
int index = 0;
int max = 0, max_counts = 0;
int result = 0;
int min_diff = 50000;
    for(index = 0; index < numsSize; index ++)
    {
        counts[nums[index]]++;
        if(first[nums[index]] == 0)
        {
            first[nums[index]] = index + 1;
        }
            last[nums[index]] = index + 1;
    }

    for(index = 0; index < 50000; index++)
    {
        if (last[index] == 0) continue;
        if (last[index] == first[index]) continue;
        if(max_counts == counts[index])
        {
            if(last[index] - first[index] < min_diff)
            {
                min_diff = last[index] - first[index];
            }
            max_counts = counts[index];
        }
        else if(max_counts < counts[index])
        {
            min_diff = last[index] - first[index];
            max_counts = counts[index];
        }
    }

    if(max_counts <= 1)
        return 1;
        else
        {
             return (min_diff + 1);
        }
}

