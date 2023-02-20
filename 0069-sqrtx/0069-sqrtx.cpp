class Solution {
public:
    int mySqrt(int x) 
    {
        double comp{1};
        
        while(comp * comp <= x)
        {
            comp++;
        }
        
        return --comp;
    }
};