#define HASHSIZE 1000

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int *ret;
    int hash[HASHSIZE] = { 0 };
    int size = nums1Size;
    
    if(size < nums2Size) size = nums2Size;

    if (!nums1 || !nums2)
        return NULL;

    *returnSize = 0;
    ret = calloc(size, sizeof(*nums1));

    for (int i = 0; i < nums1Size; ++i)
        hash[nums1[i]] = 1;
    
    for (int i = 0; i < nums2Size; ++i)
        if (hash[nums2[i]] == 1)
            hash[nums2[i]] = 2;
    
    for (int i = 0; i < HASHSIZE; ++i)
        if (hash[i] == 2)
            ret[(*returnSize)++] = i;

    return ret;
}
