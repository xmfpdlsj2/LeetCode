class Solution {
public:
    int mySqrt(int x) 
    {
        int result{};
        long long comp{}, gap{ 3 };
        
        while(comp < x)
        {
            comp += gap;
            gap += 2;
            result++;
        }
        
        return result;
    }
};