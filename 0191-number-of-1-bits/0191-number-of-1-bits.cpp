class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int one{ 1 }, ret{};
        for (int i = 0; i < 32; i++)
        {
            auto a = n & one;
            if (a == 1)
            {
                ret++;
            }
            n = n >> 1;
        }
        return ret;
    }
};