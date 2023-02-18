class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] + 1 > 9)
            {
                if (i == 0)
                {
                    std::vector<int> newOne(digits.size() + 1);
                    newOne[0] = 1;
                    return newOne;
                }
                digits[i] = 0;
            }
            else
            {
                digits[i] += 1;
                break;
            }
        }
        return digits;
    }
};