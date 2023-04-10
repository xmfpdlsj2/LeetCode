class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
     	int comp{0b0001};
        uint32_t ret{};

        for (int  i = 0; i < 32; i++)
        {
            auto temp = n & comp;
            ret = ret | (temp == 1 ? 1 : 0);
            if (i == 31)
            {
                break;
            }       
            ret = ret << 1;
            n = n >> 1;
        }
        return ret;   
    }
};