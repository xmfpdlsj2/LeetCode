class Solution {
public:
    int arrangeCoins(int n) {
        int ret{}, index{ 1 };
        while (n >= index)
        {
            ret++;
            n -= index;
            index++;
        }
        return ret;
    }
};