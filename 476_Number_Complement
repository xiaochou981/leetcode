int findComplement(int num) {
int result = 0;
int mask = 1;
    while(num > 0)
    {
        if(!(num & 1))
        {
            result |= mask;
        }
        mask <<= 1;
        num >>= 1;
    }
    
    return result;
}
