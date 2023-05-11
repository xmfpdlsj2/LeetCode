class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if (n == 1){
            return true;
        }
        
        long long pTwo{ 1 };
        while(true)
        {
            if (pTwo == n){
                return true;
            }
            if (pTwo > n){
                break;
            }
            pTwo = pTwo * 2;
        }
        return false;
    }
};