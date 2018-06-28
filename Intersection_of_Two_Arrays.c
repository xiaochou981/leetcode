int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
int i = 0;
int m = 0, n = 0;
int j = nums1Size - 1;
int temp = 0;
int *return_array = 0;
int find_intersection = 0;

    *returnSize = 0;
    if(!(nums1Size && nums2Size)) return 0;

    for(i = 0; i <= j;)
    {
        for(m = i; m < nums2Size; m++)
        {
            if(nums2[m] == nums1[i])
            {
                find_intersection = 1;
                break;
            }
        }

        if(find_intersection)
        {
            nums2[m] = nums2[i];
            nums2[i] = nums1[i];
            find_intersection = 0;
            i++;
        }
        else
        {
            temp = nums1[i];
            nums1[i] = nums1[j];
            nums1[j] = temp;
            j--;
        }

    }


    *returnSize = i;
    if( i != 0)
    {
        return_array = malloc(i * sizeof(int));
        for(n = 0; n < i; n++)
        {
            return_array[n] = nums2[n];
        }
    }

    return return_array;
}
