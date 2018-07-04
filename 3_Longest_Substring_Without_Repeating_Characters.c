int lengthOfLongestSubstring(char* s) {
int char_array[256] = {0}; // 0-start, 1-max_len
int index = 0;
int max_length = 0;
int start = 0, end = 0, last = 0;
int char_val;

    for( index = 0; index < 256; index++)
    {
        char_array[index] = -1;
    }

    for(index = 0; index < strlen(s); ++index, ++end)
    {
        char_val = s[index];

        if(char_array[char_val] == -1)
        {
            char_array[char_val] = index; //set start index
        }
        else
        {
            last = start;
            start = char_array[char_val] + 1;
            while(last < start)
            {
                char_array[(int)s[last]] = -1;
                last++;
            }
            char_array[char_val]= index;

        }
        if(end - start + 1> max_length)
        {
            max_length = end-start+1;
        }

    }

    return max_length;
    
}

