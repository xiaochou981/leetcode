int maximumSwap(int num) {
int a[8] = {0},b[10] = {0};
int total_bits = 0;
int changed = 0;
int input = num;
int i = 0, j = 0;
    
    while(input > 0)
    {
        a[i] = input%10;
        input = input / 10;
        if(b[a[i]] == 0)
        b[a[i]] = i + 1;
        i++;
        total_bits++;
    }
    
    j = 9;
    while(j>0)
    {
        if(b[j] == 0)
        {
            j--;
            continue;
        }
        i = total_bits;
        while(i> b[j])
        {
            if(a[i - 1] < j)
            {
                a[b[j] - 1] = a[i - 1];
                a[i - 1] = j;
                changed = 1;
                break;
            }
            i--;
        }
        
        if(changed) break;
        
        j--;
    }
    
    i = 0;
    j = 1;
    num = 0;
    while(i<total_bits)
    {
        num += a[i] * j;
        j*= 10;
        i++;
    }
    
    return num;  
}
