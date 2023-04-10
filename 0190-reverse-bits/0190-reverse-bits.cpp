class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t ret{};

        for (int  i = 0; i < 31; i++)
        {
            ret = ret | (n & 1);
            ret = ret << 1;
            n = n >> 1;
        }
        ret = ret | (n & 1);
        return ret;
    }
};