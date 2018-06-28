void quicksort(int left, int right, int *a)
{
int i = left, j = right;
int key = a[left];

    if(left >= right)
    {
        return;
    }

    while(i < j)
    {
        while(i < j  && key <=a[j])
        {
            j--;
        }
        a[i] = a[j];
        while (i < j && key >= a[i])
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;

    quicksort(left, i - 1, a);
    quicksort(i + 1, right, a);
}

int arrayPairSum(int* nums, int numsSize) {
   int i = 0;
   int result = 0;
   quicksort(0, numsSize - 1, nums);

   for( i = 0; i < numsSize; i+=2)
   {
        result += nums[i];
   }
    return result;
}
