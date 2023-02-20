class Solution {
public:
    int mySqrt(int x) 
    {
        long long comp{1};
        
        while(comp * comp <= x)
        {
            comp++;
        }
        
        return --comp;
    }
};