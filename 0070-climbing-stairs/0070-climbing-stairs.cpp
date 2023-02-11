class Solution {
public:
    int climbStairs(int n) 
    {
        int prev1{ 1 }, prev2{ 2 }, result{};
        
        if (n < 2)
        {
            return 1;
        }
        if (n < 3)
        {
            return 2;
        }
        
        for (int i = 0; i < (n - 2); i++)
        {
            result = prev1 + prev2;
            if (i % 2 == 0)            
            {
                prev1 = result;
            }
            else
            {
                prev2 = result;
            }
        }
        return result;
    }
};